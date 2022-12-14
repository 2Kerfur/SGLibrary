#include <iostream>

#include "SGL.h"
#ifdef _WIN32
#include "window/windows/window.h"
#endif

#ifdef __linux__
#include "window/linux/window.h"
#endif

Window window;
SGWindow::SGWindow(int width, int height, std::wstring WindowName)
	: SGWindowWidth(width), SGWindowHeight(height)
{

	window.CreateMainWindow(width, height, WindowName);
	std::cout << SGWindowWidth << " Width + Height: " << SGWindowWidth << std::endl;
	
}

SGWindow::~SGWindow()
{

}

void SGWindow::DispatchEvents()
{
	window.DispatchEvents();
	SGCloseWindow = window.CloseWindow;
}
