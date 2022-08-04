#include <X11/Xlib.h>
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


        int s;
        const char *msg = "Hello, World!";
    };


}