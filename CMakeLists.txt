cmake_minimum_required(VERSION 3.14)
project(SGLibrary)

include_directories(${PROJECT_NAME}
        SGLibrary/src
        )

add_executable(${PROJECT_NAME} WIN32
        Sandbox/src/main.cpp
        SGLibrary/src/Platform/Windows/WindowsWindow.cpp
        SGLibrary/src/Platform/Windows/WindowsWindow.h
        SGLibrary/src/Platform/Windows/WindowsButton.cpp
        SGLibrary/src/Platform/Windows/WindowsButton.h
        SGLibrary/src/Platform/Windows/WindowsLabel.cpp
        SGLibrary/src/Platform/Windows/WindowsLabel.h
        SGLibrary/src/Platform/Windows/WindowsInputField.cpp
        SGLibrary/src/Platform/Windows/WindowsInputField.h
        SGLibrary/src/Platform/Linux/LinuxWindow.cpp
        SGLibrary/src/Platform/Linux/LinuxWindow.h
        SGLibrary/src/Platform/Linux/LinuxButton.cpp
        SGLibrary/src/Platform/Linux/LinuxButton.h
        SGLibrary/src/Platform/Linux/LinuxInputField.cpp
        SGLibrary/src/Platform/Linux/LinuxInputField.h
        SGLibrary/src/Platform/Linux/LinuxLabel.cpp
        SGLibrary/src/Platform/Linux/LinuxLabel.h
        SGLibrary/src/SGLibrary/SGLabel.cpp
        SGLibrary/src/SGLibrary/SGLabel.h
        SGLibrary/src/SGLibrary/SGInputField.cpp
        SGLibrary/src/SGLibrary/SGInputField.h
        SGLibrary/src/SGLibrary/SGWindow.cpp
        SGLibrary/src/SGLibrary/SGWindow.h

)
if( MSVC )
        SET( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup" )
endif()

if (UNIX)
        target_link_libraries(${PROJECT_NAME} X11)
endif (UNIX)
