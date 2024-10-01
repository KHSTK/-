#pragma once
class Box {
private:
	double length;
	double width;
	double height;
	char* color;
	/*char color[10];*/

public:
	Box();
	Box(double l,double w, double h, const char* c);
	Box(const Box& b);
	~Box();
	void SetLength(double l);
	char* GetColor();
	double Volume();

	
};