#pragma once
#include <iostream>
class Button
{
public:
	int Create(int buttonXPercentPos, int buttonYPercentPos,
		int buttonPercentWidth, int buttonPercentHeight,
		std::string text);
	void Update(int WindowHeight, int WindowWidth);
private:

};