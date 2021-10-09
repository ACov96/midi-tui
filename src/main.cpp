#include <iostream>
#include <string>
#include "util.h"
#include "config.h"
#include "editor.h"

int main(int argc, char* argv[]) {
    gConfig.Initialize(argc, argv);

    if (gConfig.ShouldDisplayHelp()) {
        Util::display_help();
        return EXIT_SUCCESS;
    }

    Editor editor;
    editor.LoadFile(gConfig.GetFileToOpen());
    editor.Start();

    return EXIT_SUCCESS;
}