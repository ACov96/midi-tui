#include <ftxui/dom/elements.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_base.hpp>
#include <iostream>
#include <string>
#include "util.h"
#include "config.h"

int main(int argc, char* argv[]) {
    gConfig.Initialize(argc, argv);

    if (gConfig.ShouldDisplayHelp()) {
        Util::display_help();
        return EXIT_SUCCESS;
    }

    auto component = ftxui::Renderer([&] {
        return ftxui::hbox({
            ftxui::text(Util::basic_string_to_wstring(gConfig.GetFileToOpen().string())) | ftxui::flex | ftxui::border
        });
    });

    auto screen = ftxui::ScreenInteractive::Fullscreen();
    screen.Loop(component);

    return EXIT_SUCCESS;
}