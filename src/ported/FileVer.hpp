#pragma once

#include <cstdint>
#include <string>

struct FileVer
{
    uint32_t major;
    uint32_t minor;
    uint32_t build;
    uint32_t revision;
};

FileVer CreateFileVer(uint32_t aMajor, uint32_t aMinor, uint32_t aBuild, uint32_t aRevision);

/**
 * @brief Compare two file versions.
 * @param aLhs The lhs version.
 * @param aRhs The rhs version.
 * @return < 0 if lhs is lower than rhs, 0 if they are equal, > 0 if lhs is greater than lhs.
 */
int32_t CompareFileVer(const FileVer& aLhs, const FileVer& aRhs);

#ifdef __cplusplus
namespace std
{
std::wstring to_wstring(const FileVer& aVersion);
} // namespace std
#endif

#ifdef __cplusplus
inline bool operator<(const FileVer& aLhs, const FileVer& aRhs)
{
    return CompareFileVer(aLhs, aRhs) < 0;
}

inline bool operator<=(const FileVer& aLhs, const FileVer& aRhs)
{
    return CompareFileVer(aLhs, aRhs) <= 0;
}

inline bool operator>(const FileVer& aLhs, const FileVer& aRhs)
{
    return CompareFileVer(aLhs, aRhs) > 0;
}

inline bool operator>=(const FileVer& aLhs, const FileVer& aRhs)
{
    return CompareFileVer(aLhs, aRhs) >= 0;
}

inline bool operator==(const FileVer& aLhs, const FileVer& aRhs)
{
    return CompareFileVer(aLhs, aRhs) == 0;
}

inline bool operator!=(const FileVer& aLhs, const FileVer& aRhs)
{
    return CompareFileVer(aLhs, aRhs) != 0;
}
#endif
