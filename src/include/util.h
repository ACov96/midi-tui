#ifndef _MIDITUI_UTIL_H
#define _MIDITUI_UTIL_H

#include <string>

class Util
{
public:
    // NOTE: Not suitable for converting non-ASCII strings
    static std::wstring basic_string_to_wstring(std::string);

    static void display_help();
};

#endif