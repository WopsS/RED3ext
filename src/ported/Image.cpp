#include "Image.hpp"
#include "Utils.hpp"

Image::Image()
    : m_isWitcher(false)
    , m_fileVersion(0, 0, 0, 0)
    , m_productVersion(0, 0, 0, 0)
{
    std::wstring fileName;
    auto hr = wil::GetModuleFileNameW(nullptr, fileName);
    if (FAILED(hr))
    {
        SHOW_LAST_ERROR_MESSAGE_FILE_LINE(L"Could not get executable's file name.");
        return;
    }

    auto size = GetFileVersionInfoSize(fileName.c_str(), nullptr);
    if (!size)
    {
        if (GetLastError() != ERROR_RESOURCE_TYPE_NOT_FOUND)
        {
            SHOW_LAST_ERROR_MESSAGE_FILE_LINE(L"Could not retrieve version info size.\n\nFile name: {}", fileName);
        }

        // Else, fail silently, executables might not have the version information.
        return;
    }

    std::unique_ptr<uint8_t[]> data(new (std::nothrow) uint8_t[size]());
    if (!data)
    {
        SHOW_MESSAGE_BOX_FILE_LINE(MB_ICONERROR | MB_OK, L"Could not allocate {} byte(s).\n\nFile name: {}", size,
                                   fileName);
        return;
    }

    if (!GetFileVersionInfo(fileName.c_str(), 0, size, data.get()))
    {
        SHOW_LAST_ERROR_MESSAGE_FILE_LINE(L"Could not retrieve version info.\n\nFile name: {}", fileName);
        return;
    }

    struct LangAndCodePage
    {
        WORD language;
        WORD codePage;
    } * translations;
    uint32_t translationsBytes;

    if (!VerQueryValue(data.get(), L"\\VarFileInfo\\Translation", reinterpret_cast<void**>(&translations),
                       &translationsBytes))
    {
        SHOW_LAST_ERROR_MESSAGE_FILE_LINE(L"Could not retrieve translations.\n\nFile name: {}", fileName);
        return;
    }

    for (uint32_t i = 0; i < (translationsBytes / sizeof(LangAndCodePage)); i++)
    {
        wchar_t* productName;
        auto subBlock = fmt::format(L"\\StringFileInfo\\{:04x}{:04x}\\ProductName", translations[i].language,
                                    translations[i].codePage);

        if (VerQueryValue(data.get(), subBlock.c_str(), reinterpret_cast<void**>(&productName), &translationsBytes))
        {
            constexpr std::wstring_view expectedProductName = L"The Witcher 3";
            if (productName == expectedProductName)
            {
                m_isWitcher = true;
                break;
            }
        }
    }

    if (m_isWitcher)
    {
        VS_FIXEDFILEINFO* fileInfo = nullptr;
        UINT fileInfoBytes;

        if (!VerQueryValue(data.get(), L"\\", reinterpret_cast<LPVOID*>(&fileInfo), &fileInfoBytes))
        {
            SHOW_LAST_ERROR_MESSAGE_FILE_LINE(L"Could not retrieve the file's info.\n\nFile name: {}", fileName);
            return;
        }

        constexpr auto signature = 0xFEEF04BD;
        if (fileInfo->dwSignature != signature)
        {
            SHOW_LAST_ERROR_MESSAGE_FILE_LINE(
                L"The file's signature ({:#x}) did not match the expected value ({:#x}).\n\nFile name: {}",
                fileInfo->dwSignature, signature, fileName);
            return;
        }

        {
            uint32_t major = (fileInfo->dwFileVersionMS >> 16) & 0xFF;
            uint32_t minor = fileInfo->dwFileVersionMS & 0xFFFF;
            uint32_t build = (fileInfo->dwFileVersionLS >> 16) & 0xFFFF;
            uint32_t revision = fileInfo->dwFileVersionLS & 0xFFFF;

            m_fileVersion = FileVer(major, minor, build, revision);
        }

        {
            uint32_t major = (fileInfo->dwProductVersionMS >> 16) & 0xFF;
            uint32_t minor = fileInfo->dwProductVersionMS & 0xFFFF;
            uint32_t patch = (fileInfo->dwProductVersionLS >> 16) & 0xFFFF;
            uint32_t revision = fileInfo->dwProductVersionLS & 0xFFFF;

            m_productVersion = FileVer(major, minor, patch, revision);
        }
    }
}

Image* Image::Get()
{
    static Image instance;
    return &instance;
}

bool Image::IsWitcher() const
{
    return m_isWitcher;
}

bool Image::IsSupported() const
{
    const auto supportedVersions = GetSupportedVersions();
    for (const auto& version : supportedVersions)
    {
        if (version == m_fileVersion)
        {
            return true;
        }
    }

    return false;
}

const FileVer& Image::GetFileVersion() const
{
    return m_fileVersion;
}

const FileVer& Image::GetProductVersion() const
{
    return m_productVersion;
}

const std::vector<FileVer> Image::GetSupportedVersions() const
{
    static FileVer version1_32(3, 0, 19, 14337);
    static FileVer version4_00(4, 0, 0, 65171);
    static FileVer version4_00_hotfix1(4, 0, 1, 427);
    static FileVer version4_00_hotfix2(4, 0, 1, 755);
    static FileVer version4_01(4, 0, 1, 4839);
    static FileVer version4_01_hotfix1(4, 0, 1, 5600);
    static FileVer version4_02(4, 0, 1, 8807);
    static FileVer version4_02_hotfix1(4, 0, 1, 10918);
    return {version4_01};
}
