#pragma once

#ifdef _WIN32
#include "windows/window.h"
#endif

#ifdef __linux__
#include "linux/window.h"
#endif
#include <iostream>
#include "SGElement.h"
class SGWindow
{
public:
	SGWindow(int width, int height, std::string windowName);
	void SetSize(int width, int height);
	void SetWindowName(std::string text);
	void Update();
	bool WindowClosed = false;
	void AddElement(SGElement element);
private:
	struct SGWindowParameters
	{
		int Width;
		int Height;
		std::string WindowName;
	};

	SGWindowParameters windowParameters;
	
	
};