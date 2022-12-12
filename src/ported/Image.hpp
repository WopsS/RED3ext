#pragma once

#include "FileVer.hpp"

class Image
{
public:
    static Image* Get();

    bool IsWitcher() const;
    bool IsSupported() const;

    const FileVer& GetFileVersion() const;
    const FileVer& GetProductVersion() const;
    const std::vector<FileVer> GetSupportedVersions() const;

private:
    Image();
    ~Image() = default;

    bool m_isWitcher;
    FileVer m_fileVersion;
    FileVer m_productVersion;
};
