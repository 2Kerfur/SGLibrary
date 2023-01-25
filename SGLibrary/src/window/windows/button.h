#pragma once
#include <iostream>
#include "window.h"
class Button
{
public:
	int Create(int buttonXPercentPos, int buttonYPercentPos,
		int buttonPercentWidth, int buttonPercentHeight,
		std::string text, Window* window);
	void Update(int WindowHeight, int WindowWidth);
private:

};

