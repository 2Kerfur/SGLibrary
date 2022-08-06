cmake_minimum_required(VERSION 3.14)
project(SGLibrary)

include_directories(${PROJECT_NAME}
        src
        )

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/window/Window.cpp
        src/window/ui/Button.cpp
        src/window/ui/TextLabel.cpp
        src/window/ui/InputField.cpp
        src/window/ui/Image.cpp
)
target_link_libraries(${PROJECT_NAME} X11)