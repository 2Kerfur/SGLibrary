#ifdef _WIN32
#include "windows/window.h"
#endif

#ifdef __linux__
#include "linux/window.h"
#endif

#include "SGWindow.h"

Window window;

SGWindow::SGWindow(int width, int height, std::string windowName)
{
	windowParameters.Width = width;
	windowParameters.Height = height;
	windowParameters.WindowName = windowName;
	window.CreateMainWindow(width, height, windowName);
}

void SGWindow::SetSize(int width, int height)
{
}

void SGWindow::SetTitle(std::string text)
{
}

void SGWindow::Update()
{
}

void SGWindow::AddElement(SGElement element)
{
}
