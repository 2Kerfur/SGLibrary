#pragma once
class SGElement
{
public:
	SGElement(int x_percent_pos, int y_percent_pos, int width, int height);

	void SetPos(int x_percent_pos, int y_percent_pos);
	void SetSize(int widht, int height);
	void Update(int window_width, int window_height);

	~SGElement();
private:

};