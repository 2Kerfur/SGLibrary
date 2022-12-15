#pragma once
#include <iostream>
#ifdef _WIN32
#include "windows/window.h"
#endif

#ifdef __linux__
#include "linux/window.h"
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
	virtual void Update(int window_width, int window_height) override;
private:
	std::string ButtonText = "Default";
	int ButtonXPercentPos = 0;
	int ButtonYPercentPos = 0;
	int ButtonPercentWidth = 5;
	int ButtonPercentHeight = 5;
};

