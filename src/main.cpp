#include <iostream>
#include "KeyCodes.h"
#include "window/Window.h"
#include "window/ui/TextLabel.h"

int main(void) {
    SGL::SGLWindow window;



    window.Init();

    char label_text_1[] = "Haha haha";
    SGL::TextLabel label0;

    SGL::Button button0;

    label0.Create(label_text_1, 100, 30, window.GetDisplay(), window.GetWindow(), window.GetScreen());
    button0.Create(label_text_1, 10, 70, window.GetDisplay(), window.GetWindow(), window.GetScreen());

    window.AddUI(label0);
    window.AddUI(button0);
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