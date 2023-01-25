#include <iostream>

#include "SGL.h"


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

void SGWindow::AddElement(SGElement element)
{
	
}
