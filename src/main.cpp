#include <ftxui/dom/elements.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_base.hpp>
#include <iostream>
#include <string>
#include "util.h"

int main(int argc, char* argv[]) {
    auto component = ftxui::Renderer([&] {
        return ftxui::hbox({
            ftxui::text(basic_string_to_wstring("Title")) | ftxui::flex | ftxui::border
        });
    });

    auto screen = ftxui::ScreenInteractive::Fullscreen();
    screen.Loop(component);

    return EXIT_SUCCESS;
}