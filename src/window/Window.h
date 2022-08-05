#include <X11/Xlib.h>
#include "ui/TextLabel.h"
namespace SGL {
    class SGLWindow
    {
    public:
        int Init();
        int Update();
        int Destroy();
    private:
        Display *display;
        Window window;
        XEvent xEvent;

        XColor color;
        Colormap colormap;

        TextLabel label;

        int s;
        const char *msg = "Hello, World!";
    };


}