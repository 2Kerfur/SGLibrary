#include "Window.h"

#include <X11/Xlib.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include "ui/TextLabel.h"

//#include "KeyCodes.h"

int SGL::SGLWindow::Init() {
    display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }

    s = DefaultScreen(display);

    char green[] = "#00FF00";

    colormap = DefaultColormap(display, 0);
    XParseColor(display, colormap, green, &color);
    XAllocColor(display, colormap, &color);


    window = XCreateSimpleWindow(display, RootWindow(display, s), 10, 10, 100, 100, 1,
                                 BlackPixel(display, s), WhitePixel(display, s));
    XSelectInput(display, window, ExposureMask | KeyPressMask);
    XMapWindow(display, window);
    TextLabel label;
    label.Delete();

    char *window_name = "hi";
    label.Create(window_name, 100, 100);
    return 0;
}

int SGL::SGLWindow::Destroy() {
    XCloseDisplay(display);
    return 0;
}

int SGL::SGLWindow::Update() {
    XNextEvent(display, &xEvent);
    if (xEvent.type == Expose) {
        XFillRectangle(display, window, DefaultGC(display, s), 20, 20, 100, 10);
        XDrawString(display, window, DefaultGC(display, s), 0, 50, msg, strlen(msg));
    }
    if (xEvent.type == KeyPress) {
        uint32_t KeyCode = xEvent.xkey.keycode;
        std::cout << KeyCode << std::endl;
        if (KeyCode == 9) {
            std::cout << "Esc pressed" << std::endl;
            return -1;
        }
    }
    return 0;
}
