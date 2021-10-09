#include "util.h"

// NOTE: Not suitable for converting non-ASCII strings
std::wstring basic_string_to_wstring(std::string s) {
    return std::wstring(s.begin(), s.end());
}