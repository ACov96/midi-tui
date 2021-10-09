#ifndef _MIDITUI_CONFIG_H
#define _MIDITUI_CONFIG_H

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

#endif