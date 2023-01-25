#include <Windows.h>
#include <iostream>
#include "button.h"
class Window {
public:
    Window() : hWindow(0) {}
    ~Window();
    static Window* CreateMainWindow(int WindowWidth, int WindowHeight, std::wstring WindowName);

    void DispatchEvents();
    bool CloseWindow = false;

private:
    int WindowWidth = 100;
    int WindowHeight = 100;

    HWND hWindow;
    HINSTANCE hInst;
    
    
    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    static const char* m_pszClassName;
    BOOL bRet;
    MSG msg;



};
