#include <string.h>
#include "config.h"

Config gConfig;

bool Config::Initialize(int argc, char** argv) {
    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0 
        || strcmp(argv[i], "-h") == 0) {
            _display_help = true;
        }
        else {
            // Assume first non-option argument is file to open
            _path = argv[i];
        }
    }
    return true;
}

bool Config::ShouldDisplayHelp() {
    return _display_help;
}

std::filesystem::path Config::GetFileToOpen() {
    return _path;
}