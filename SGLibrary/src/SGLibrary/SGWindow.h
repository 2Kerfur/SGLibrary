#pragma once

#ifdef _WIN32
#include "Platform/Windows/WindowsWindow.h"
#endif

#ifdef __linux__
#include "Platform/Windows/LinuxWindow.h"
#endif
#include <iostream>
#include <vector>

#include "SGElement.h"

class SGWindow
{
public:
	SGWindow(int width, int height, std::string windowName);
	void SetSize(int width, int height);
	void SetWindowName(std::string text);
	void Update();
	bool WindowClosed = false;

    void AddElement(SGElement *elements);
private:
    std::vector<SGElement*> elements;

	struct SGWindowParameters
	{
		int Width;
		int Height;
		std::string WindowName;
	};
    WindowsWindow window;
	SGWindowParameters windowParameters;
	
	
};