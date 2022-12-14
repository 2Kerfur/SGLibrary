#include "Button.h"

int32_t SGL::Button::Visible(bool show) {

    return 0;
}

int32_t SGL::Button::Create(char *Text, int32_t x_pos, int32_t y_pos, Display *_display, Window _window, int _screen) {
    Button_x_pos = x_pos;
    Button_y_pos = y_pos;
    for (int i = 0; i < 51; i++)
    {
        Button_text[i] = Text[i];
    }
    window = _window;
    display = _display;
    screen = _screen;


    return 0;
}

int32_t SGL::Button::Draw() {
    XFillRectangle(display, window, DefaultGC(display, screen), Button_x_pos, Button_y_pos, Button_x_pos + 100, Button_y_pos + 100);
    return 0;
}

void SGL::Button::SetText(char *Text) {

}

int32_t SGL::Button::GetXPos() {

    return 0;
}

int32_t SGL::Button::GetYPos() {

    return 0;
}

int32_t SGL::Button::Delete() {

    return 0;
}
