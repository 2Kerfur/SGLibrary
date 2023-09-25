#pragma once

#ifdef _WIN32
#include "Platform/Windows/WindowsWindow.h"
#endif

#ifdef __linux__
#include "linux/window.h"
#endif
#include <iostream>

class SGWindow
{
public:
	SGWindow(int width, int height, std::string windowName);
	void SetSize(int width, int height);
	void SetWindowName(std::string text);
	void Update();
	bool WindowClosed = false;
private:
	struct SGWindowParameters
	{
		int Width;
		int Height;
		std::string WindowName;
	};
    WindowsWindow window;
	SGWindowParameters windowParameters;
	
	
};