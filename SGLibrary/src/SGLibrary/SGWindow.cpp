#include "SGWindow.h"

//Window window;
//SGElement windowElements[10]; //TODO: window must dynamically change size of this array
int counter = 0;
SGWindow::SGWindow(int width, int height, std::string windowName)
{
	windowParameters.Width = width;
	windowParameters.Height = height;
	windowParameters.WindowName = windowName;
	//window.CreateMainWindow(width, height, windowName);
}

void SGWindow::SetSize(int width, int height)
{
	windowParameters.Width = width;
	windowParameters.Height = height;
	//window.SetSize(width, height);
}

void SGWindow::SetWindowName(std::string windowName)
{
	windowParameters.WindowName = windowName;
	//window.SetName(windowName);
}

void SGWindow::Update()
{
	//window.DispatchEvents();
	//WindowClosed = window.CloseWindow;
	for (int i = 0; i < counter; i++)
	{
	//	windowElements[i].Update(windowParameters.Width, windowParameters.Height);
	}
}
