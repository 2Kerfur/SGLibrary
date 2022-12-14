#include "SGL.h"


int main(int argc, wchar_t* argv[]) {
    
    SGWindow* window = new SGWindow(300, 250, L"SGLibraryTest");

    while (!window->SGCloseWindow)
    {
        window->DispatchEvents();
    }
    
    return 0;

}