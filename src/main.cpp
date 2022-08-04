#include <iostream>
#include "KeyCodes.h"
#include "window/Window.h"

int main(void) {
    SGL::SGLWindow window;

    std::cout << window.Init() << std::endl;
    while (true)
    {
        bool running = window.Update();
        if (running == -1)
        {
            break;
        }
    }
    window.Destroy();

    return 0;
}