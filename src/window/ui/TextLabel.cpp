#include <menu.h>
#include "TextLabel.h"
#include <iostream>

int32_t SGL::TextLabel::Create(char *Text, int32_t x_pos, int32_t y_pos) {
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

