project(SGLibrary)

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/window/Window.cpp
        src/window/ui/Button.cpp
        src/window/ui/TextLabel.cpp
        src/window/ui/InputField.cpp
)
target_link_libraries(${PROJECT_NAME} X11)