
#include <X11/Xlib.h>
#include "ui/TextLabel.h"
#include "ui/Button.h"
namespace SGL {
    class SGLWindow
    {
    public:
        int Init();
        int Update();
        int Destroy();

        int AddUI(TextLabel textLabel);
        int AddUI(Button button);

        Window GetWindow();
        int GetScreen();
        Display* GetDisplay();

    private:
        Display *display;
        Window window;
        XEvent xEvent;


        // All UI
        int Window_labels_count = 0;
        int Window_buttons_count = 0; // Starts with 0 (default)
        TextLabel Window_labels[30]; //TODO: use malloc to dynamically resize
        Button Window_buttons[30]; //TODO: use malloc to dynamically resize


        void Draw();
        XColor color;
        Colormap colormap;

        TextLabel label;
        int s;
        const char *msg = "Hello, World!";
    };


}