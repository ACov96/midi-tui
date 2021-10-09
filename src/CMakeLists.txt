add_executable(midi-tui 
    main.cpp 
    util.cpp
    config.cpp
    editor.cpp
)

set_property(TARGET midi-tui PROPERTY CXX_STANDARD 20)

target_include_directories(midi-tui PUBLIC include)

# --- Fetch FTXUI --------------------------------------------------------------
include(FetchContent)

set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG 21d746e8586a59a39ed5c73317812f17264e68d5
)

FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

target_link_libraries(midi-tui 
    PRIVATE ftxui::screen 
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
)

install(TARGETS midi-tui RUNTIME DESTINATION "bin")