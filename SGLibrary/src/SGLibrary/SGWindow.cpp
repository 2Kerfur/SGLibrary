#include "SGWindow.h"

SGWindow::SGWindow(int width, int height, std::string windowName)
{
	windowParameters.Width = width;
	windowParameters.Height = height;
	windowParameters.WindowName = windowName;
	window.CreateMainWindow(width, height, windowName);
}

void SGWindow::SetSize(int width, int height)
{
	windowParameters.Width = width;
	windowParameters.Height = height;
	window.SetSize(width, height);
}

void SGWindow::SetWindowName(std::string windowName)
{
	windowParameters.WindowName = windowName;
	window.SetName(windowName);
}

void SGWindow::Update()
{
	window.DispatchEvents();
	WindowClosed = window.CloseWindow;
}

void SGWindow::AddElement(SGElement *elements) {

}

