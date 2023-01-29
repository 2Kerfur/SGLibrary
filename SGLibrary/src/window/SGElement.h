#pragma once
#pragma once
#include <iostream>
class SGElement
{
public:
	//SGElement(int x_percent_pos, int y_percent_pos, int width, int height);

	virtual void SetPos(int x_percent_pos, int y_percent_pos);
	virtual void SetSize(int widht, int height);
	virtual void Update(int window_width, int window_height);

	~SGElement();
private:

};