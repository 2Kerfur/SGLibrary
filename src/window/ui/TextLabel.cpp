#include <menu.h>
#include "TextLabel.h"
#include <iostream>
#include <cstring>

#include <X11/Xlib.h>
int32_t SGL::TextLabel::Create(char Text[], int32_t x_pos, int32_t y_pos, Display *_display, Window _window, int _screen) {
    Label_x_pos = x_pos;
    Label_y_pos = y_pos;
    for (int i = 0; i < 51; i++)
    {
        Label_text[i] = Text[i];
    }
    std::cout << Label_text << std::endl;
    window = _window;
    display = _display;
    screen = _screen;


    return 0;
}

int32_t SGL::TextLabel::Visible(bool show){
    isVisible = show;
    return 0;
}

int32_t SGL::TextLabel::Delete() {

    return 0;
}

int32_t SGL::TextLabel::Draw() {
    XDrawString(display, window, DefaultGC(display, screen), Label_x_pos, Label_y_pos, Label_text, strlen(Label_text));
    return 0;
}

void SGL::TextLabel::SetText(char Text[]) {
    for (int i = 0; i < 51; i++)
    {
        Label_text[i] = Text[i];
    }
    std::cout << Text << std::endl;
}

