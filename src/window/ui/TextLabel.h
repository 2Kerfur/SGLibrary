#ifndef TEXT_LABEL_H
#define TEXT_LABEL_H

#define MAX_TEXT 20
#include <X11/Xlib.h>
#include "UI.h"

namespace SGL {
    class TextLabel {
    public:
        int32_t Visible(bool show);
        int32_t Create(char Text[], int32_t x_pos, int32_t y_pos, Display *display, Window window, int screen);
        int32_t Draw();
        void SetText(char Text[]);

        int32_t GetXPos();
        int32_t GetYPos();

        int32_t Delete();
    private:
        bool isVisible = true;
        char Label_text[50];
        Display *display;
        Window window;
        int screen = 0; //default
        int32_t Label_x_pos = 0; //default
        int32_t Label_y_pos = 0; //default

    };
}

#endif