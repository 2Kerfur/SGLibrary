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



    char label_text_1[] = "Ok";
    label.Create(label_text_1, 0, 10, display, window, s);


    return 0;
}


int SGL::SGLWindow::Destroy() {
    XCloseDisplay(display);
    return 0;
}

int SGL::SGLWindow::Update() {
    XNextEvent(display, &xEvent);
    if (xEvent.type == Expose) {
        //XFillRectangle(display, window, DefaultGC(display, s), 20, 20, 100, 10);
        char label_text_2[] = "Haha haha";
        label.SetText(label_text_2);
        label.Draw();
        //XDrawString(display, window, DefaultGC(display, s), 0, 50, msg, strlen(msg));
    }

    if (xEvent.type == KeyPress) {
        int KeyCode = xEvent.xkey.keycode;
        std::cout << KeyCode << std::endl;

        char label_text_2[50];
        for (int i = 0; i < 51; i++)
        {
            label_text_2[i] = 0;
        }
        //label.SetText(label_text_2);
        //label_text_2[0] = key;
        label.SetText(label_text_2);
        label.Draw();

        if (KeyCode == 9) {
            std::cout << "Esc pressed" << std::endl;
            return -1;
        }
    }
    return 0;
}
