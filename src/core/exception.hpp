#pragma once

#include <exception>
#include <string>
#include <string_view>

namespace red3ext
{
class exception : public std::exception
{
public:
    template<typename... Args>
    exception(std::string_view what_fmt, Args&&... what_args);

    exception(const exception&) = default;
    exception& operator=(const exception&) = default;

    virtual ~exception() noexcept = default;
};

template<typename... Args>
inline exception::exception(std::string_view what_fmt, Args&&... what_args)
    : std::exception(fmt::format(fmt::runtime(what_fmt), std::forward<Args>(what_args)...).c_str())
{
}
} // namespace red3ext
