#include <iostream>
#include "util.h"

#define HELP_ALIGNMENT_TABS "\t\t\t\t"

// NOTE: Not suitable for converting non-ASCII strings
std::wstring Util::basic_string_to_wstring(std::string s)
{
    return std::wstring(s.begin(), s.end());
}

void Util::display_help() {
    std::cout << "MIDI TUI Editor" << std::endl
              << std::endl
              << "Usage:" << std::endl
              << "\tmidi-tui [options] <filename>" << std::endl
              << std::endl
              << "Options:" << std::endl
              << "\t--help|-h" << HELP_ALIGNMENT_TABS << "Display help message." << std::endl
              << std::endl;
}