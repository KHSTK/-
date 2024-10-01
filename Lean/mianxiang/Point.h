#pragma once
#include<string>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int xx, int yy);
	string ToString();
};