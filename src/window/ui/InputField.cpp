#include "InputField.h"

int32_t SGL::InputField::Visible(bool show) {
    return 0;
}

int32_t SGL::InputField::Create(char *Text, int32_t x_pos, int32_t y_pos, Display *display, Window window, int screen) {
    return 0;
}

int32_t SGL::InputField::Draw() {
    // box around input field
    //XDrawLine(display, window, DefaultGC(display, s), text_x + 5, text_y + 7, text_x + 100, text_y + 7);
    //XDrawLine(display, window, DefaultGC(display, s), text_x + 5, text_y + 23, text_x + 100, text_y + 23);
    //XDrawLine(display, window, DefaultGC(display, s), text_x + 5, text_y + 7, text_x + 5, text_y + 23);
    //XDrawLine(display, window, DefaultGC(display, s), text_x + 100, text_y + 7, text_x + 100, text_y + 23);
    return 0;
}

void SGL::InputField::SetText(char *Text) {

}

int32_t SGL::InputField::Delete() {
    return 0;
}
