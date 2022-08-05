#include <menu.h>
#include "TextLabel.h"
#include <iostream>
#include <cstring>

#include <X11/Xlib.h>
int32_t SGL::TextLabel::Create(char *Text, int32_t x_pos, int32_t y_pos, Display *display, Window window, int screen) {
    Label_x_pos = x_pos;
    Label_y_pos = y_pos;
    Label_text = Text;
    std::cout << Label_text << std::endl;


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
    XDrawString(display, window, DefaultGC(display, s), 0, 50, msg, strlen(msg));
    return 0;
}

