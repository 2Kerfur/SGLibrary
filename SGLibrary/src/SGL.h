#include <iostream>

class SGWindow
{
public:
	SGWindow(int width, int height, std::wstring WindowName);
	void DispatchEvents();
	bool SGCloseWindow = false;
	~SGWindow();
private:
	std::string SGWindowName = "Window";
	int SGWindowWidth = 100;
	int SGWindowHeight = 100;

	

};