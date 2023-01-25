#pragma once
#include <iostream>
#ifdef _WIN32
#include "windows/button.h"
#endif

#ifdef __linux__
#include "linux/button.h"
#endif
#include "SGElement.h"

class SGButton : SGElement
{
public:
	SGButton(int buttonXPercentPos, int buttonYPercentPos, 
			int buttonPercentWidth, int buttonPercentHeight,
			std::string text
	);

	~SGButton();
	//void Update(int window_width, int window_height) override;
private:
	Button button;
	std::string ButtonText = "Default";
	int WindowWidth = 0;
	int WindowHeight = 0;

	int ButtonXPercentPos = 0;
	int ButtonYPercentPos = 0;
	int ButtonPercentWidth = 5;
	int ButtonPercentHeight = 5;
};

