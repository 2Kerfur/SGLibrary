#pragma once
#include <iostream>
#include "SGElement.h"
class SGWindow
{
public:
	SGWindow(int width, int height, std::string windowName);
	void SetSize(int width, int height);
	void SetTitle(std::string text);
	void Update();

	void AddElement(SGElement element);
private:
	struct SGWindowParameters
	{
		int Width;
		int Height;
		std::string WindowName;
	};

	SGWindowParameters windowParameters;
	SGElement windowElements[10]; //TODO: window must dynamically change size of this array
	
};