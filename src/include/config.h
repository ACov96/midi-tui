#pragma once

#include <filesystem>

class Config
{
public:
    bool Initialize(int argc, char **argv);
    bool ShouldDisplayHelp();
    std::filesystem::path GetFileToOpen();

private:
    bool _display_help = false;
    std::filesystem::path _path; 
};

extern Config gConfig;
