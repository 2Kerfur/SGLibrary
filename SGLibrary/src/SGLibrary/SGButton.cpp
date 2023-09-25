#include "SGButton.h"

SGButton::SGButton(int buttonXPercentPos, int buttonYPercentPos, 
	int buttonPercentWidth, int buttonPercentHeight, 
	std::string text, void(*callback)(), SGWindow *window)
{
	ButtonXPercentPos = buttonXPercentPos;
	ButtonYPercentPos = buttonYPercentPos;
	ButtonPercentWidth = buttonPercentWidth;
	ButtonPercentHeight = buttonPercentHeight;
	ButtonText = text;
	//window->AddElement(*this);
	
	SGButtonCallback = callback;
	//button.Create(buttonXPercentPos, buttonYPercentPos,
	//	buttonPercentWidth, buttonPercentHeight,
	//	text, );
}

void SGButton::SetPos(int x_percent_pos, int y_percent_pos)
{
}

void SGButton::SetSize(int widht, int height)
{
}

void SGButton::SetText(std::string text)
{
}

void SGButton::Update(int window_width, int window_height)
{
	WindowWidth = window_width;
	WindowHeight = window_height;
	//button.Update(window_width, window_height);
}

SGButton::~SGButton()
{
}
