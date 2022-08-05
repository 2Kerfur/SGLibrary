#include <iostream>
#include "KeyCodes.h"
#include "window/Window.h"
#include "window/ui/TextLabel.h"

int main(void) {
    SGL::SGLWindow window;



    window.Init();

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