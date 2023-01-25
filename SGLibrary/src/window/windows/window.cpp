#include "window.h"
#include <iostream>
#define IDC_SELECT_VIDEO (100)

static const wchar_t CLASS_NAME[] = L"Sample Window Class";
HWND SelectVideoBTN;
Window* Window::CreateMainWindow(int WindowWidth, int WindowHeight, std::wstring WindowName) {
    LPCWSTR sw = WindowName.c_str();
    

    HINSTANCE hInst = GetModuleHandle(nullptr);
    WNDCLASS wincl;
    if (!GetClassInfo(hInst, CLASS_NAME, &wincl)) {
        wincl.style = 0;
        wincl.hInstance = hInst;
        wincl.lpszClassName = CLASS_NAME;
        wincl.lpfnWndProc = WindowProc;
        wincl.cbClsExtra = 0;
        wincl.cbWndExtra = 0;
        wincl.hIcon = NULL;
        wincl.hCursor = NULL;
        wincl.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
        wincl.lpszMenuName = NULL;
        if (RegisterClass(&wincl) == 0) {
            MessageBox(NULL, L"The window class failed to register.", L"Error", 0);
            return 0;
        }
    }
    

    Window* window = new Window;
    HWND hWnd = CreateWindow(CLASS_NAME, (LPCWSTR)sw,
        WS_VISIBLE | WS_OVERLAPPED | WS_SYSMENU | 
        WS_SIZEBOX | WS_MINIMIZEBOX | WS_MAXIMIZEBOX,
        150, 150, WindowWidth, WindowHeight, NULL, NULL,
        hInst, window);

    SetWindowTextW(hWnd, (LPCWSTR)sw);
    
    //SetWindowLong(hWnd, GWL_STYLE, 0); //remove all window styles, check MSDN for details

    
    if (hWnd == NULL) {
        delete window;
        MessageBox(NULL, L"Problem creating the window.", L"Error", 0);
        return 0;
    }

    SelectVideoBTN = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed 
        L"Select Video's",      // Button text 
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,  // Styles 
        10,         // x position 
        20,        // y position 
        20,        // Button width
        25,         // Button height
        hWnd,       // Parent window
        (HMENU)IDC_SELECT_VIDEO, // Assign appropriate control ID
        hInst,
        NULL);      // Pointer not needed.
   
    //SetWindowLong(hWnd, GWL_STYLE, 1); //remove all window styles, check MSDN for details
    ShowWindow(hWnd, SW_SHOW); //display window

    return window;

}

void Window::DispatchEvents()
{
    if ((bRet = GetMessage(&msg, 0, 0, 0)) != 0)
    {
        if (bRet == -1)
        {
            // handle the error and possibly exit
        }
        else
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    else {
        CloseWindow = true;
    }
}

LRESULT CALLBACK Window::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    switch (uMsg) {

    case WM_NCCREATE: {
        CREATESTRUCT* pcs = (CREATESTRUCT*)lParam;
        Window* window = (Window*)pcs->lpCreateParams;
        window->hWindow = hwnd;
        SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG)pcs->lpCreateParams);

        
        return TRUE;
    }
    case WM_COMMAND:
        if (LOWORD(wParam) == IDC_SELECT_VIDEO) {
            std::cout << " button was pressed" << std::endl;
        }
        break;
    case WM_CLOSE:

        DestroyWindow(hwnd);

        return 0;
    case WM_DESTROY: {
        Window* window = (Window*)GetWindowLongPtr(hwnd, GWLP_USERDATA);
        PostQuitMessage(0);
        break;
    }
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // All painting occurs here, between BeginPaint and EndPaint.

        FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));

        EndPaint(hwnd, &ps);
        break;
    }
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);

    }

    return 0;

}

Window::~Window() {
    if (hWindow) DestroyWindow(hWindow);
}