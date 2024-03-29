#pragma once
#include <Windows.h>
#include <string>

class WindowsWindow {
public:
    WindowsWindow() : hWindow(0) {}
    ~WindowsWindow();
    static WindowsWindow* CreateMainWindow(int WindowWidth, int WindowHeight, std::string WindowName);

    void DispatchEvents();
    void SetSize(int width, int height);
    void SetName(std::string windowName);

    bool CloseWindow = false;

private:
    int WindowWidth = 100;
    int WindowHeight = 100;
    void AppendText(HWND hEditWnd, LPCTSTR Text);
    HWND hWindow;
    HINSTANCE hInst;
    RECT GetLocalCoordinates(HWND hWnd) const;

    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    static const char* m_pszClassName;
    BOOL bRet;
    MSG msg;
};
