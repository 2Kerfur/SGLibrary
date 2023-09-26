#pragma once
#include <cstdint>
#include <string>

class SGElement {
public:
    struct SGElementParameters
    {
        uint8_t percentXPos;
        uint8_t percentYPos;
        uint8_t percentWidth;
        uint8_t percentHeight;
        std::string elementText;
        void *callback;
    };
    SGElementParameters parameters;

    virtual void Create(SGElementParameters elementParameters);
    virtual void SetPos(uint8_t XPos, uint8_t YPos);
    virtual void SetSize(uint8_t width, uint8_t height);
    virtual void SetText(std::string text);
};


