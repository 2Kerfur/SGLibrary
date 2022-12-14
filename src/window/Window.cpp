#include "Window.h"

#include <X11/Xlib.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include "ui/TextLabel.h"

#include "KeyCodes.h"

int SGL::SGLWindow::Init() {
    display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }

    s = DefaultScreen(display);



    window = XCreateSimpleWindow(display, RootWindow(display, s), 10, 10, 100, 100, 1,
                                 BlackPixel(display, s), WhitePixel(display, s));
    XSelectInput(display, window, ExposureMask | KeyPressMask);
    XMapWindow(display, window);








    return 0;
}


int SGL::SGLWindow::Destroy() {
    XCloseDisplay(display);
    return 0;
}

int SGL::SGLWindow::Update() {
    XNextEvent(display, &xEvent);
    switch (xEvent.type) {
        case ButtonPress:
            std::cout << "button pressed" << std::endl;
            switch (xEvent.xbutton.button) {
                std::cout << "button pressed" << std::endl;
                case Button1:

                    break;

            }
        //case Expose:
            //break;
        case KeyPress:
            int KeyCode = xEvent.xkey.keycode;
            if (KeyCode == KEY_ESC) {
                std::cout << "Esc pressed" << std::endl;
                exit(0);
            }

            return 0;
    }

    int root_x, root_y;
    int win_x, win_y;
    unsigned int mask;
    Window root_window, child_return;

    XQueryPointer(display, window, &root_window, &child_return, &root_x, &root_y, &root_x, &root_y, &mask); //<--four

    std::cout << "X = " << root_x << " Y = " << root_y << std::endl;
    Draw();
}

void SGL::SGLWindow::Draw() {

    //XSetForeground(display, DefaultGC(display, s), (98, 176, 200));
    //XFillRectangle(display, window, DefaultGC(display, s), text_x + 6, text_y + 8, text_x + 5, text_y + 5);

    XSetForeground(display, DefaultGC(display, s), (0, 0, 0));

    for (int i = 0; i < Window_labels_count; i++)  // Draw all TextLabels
    {
        Window_labels[i].Draw();
    }
    for (int i = 0; i < Window_buttons_count; i++) // Draw all Buttons
    {
        Window_buttons[i].Draw();
    }

}

int SGL::SGLWindow::AddUI(TextLabel textLabel) {
    Window_labels[Window_labels_count] = textLabel;
    Window_labels_count += 1;
    return 0;
}

int SGL::SGLWindow::AddUI(SGL::Button button) {
    Window_buttons[Window_buttons_count] = button;
    Window_buttons_count += 1;
    return 0;
}

Window SGL::SGLWindow::GetWindow() {
    return window;
}

int SGL::SGLWindow::GetScreen() {
    return s;
}

Display *SGL::SGLWindow::GetDisplay() {
    return display;
}
