#pragma once
#include <iostream>
#ifdef _WIN32
#include "windows/button.h"
#endif

#ifdef __linux__
#include "linux/button.h"
#endif
#include "SGElement.h"
#include "SGWindow.h"
#include <string>
class SGButton : SGElement
{
public:
	SGButton(int x_percent_pos, int y_percent_pos,
		int width, int height,
		std::string text, void (*func)(), SGWindow *window);

	void SetPos(int x_percent_pos, int y_percent_pos);
	void SetSize(int widht, int height);
	void SetText(std::string text);
	void Update(int window_width, int window_height);
	void (*SGButtonCallback)();
	~SGButton();
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

