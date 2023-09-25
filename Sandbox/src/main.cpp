#include "SGL.h"

#include <iostream>

void ButtonCallback()
{
    std::cout << "Callback working" << std::endl;
}

int main() {


    SGWindow* window = new SGWindow(300, 200, "SGLibraryTest");
    //SGButton* button = new SGButton(10, 10, 10, 10, "Text", *ButtonCallback, window);
    //window->SetWindowName("HI");
    //window->SetSize(1000, 1000);

    while(!window->WindowClosed)
    {
        window->Update();
    }
    
    return 0;
}

