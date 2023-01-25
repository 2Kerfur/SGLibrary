#include "SGL.h"
#include "window/SGButton.h"

int main(int argc, wchar_t* argv[]) {
    
    SGWindow* window = new SGWindow(300, 250, L"SGLibraryTest");
    SGButton* button = new SGButton(10, 10, 10, 10, "Text");
    while (!window->SGCloseWindow)
    {
        window->DispatchEvents();
    }
    
    return 0;

}

void ButtonCallback()
{

}