#include<iostream>
#include"Rect.h"
using namespace std;
Rect::Rect(int l, int w) {
	nLength = l;
	nWidth = w;
}
Rect::Rect(double l, double w) {
	mLength = l;
	mWidth = w;
}
int Rect::Area_int() {
	return nLength * nWidth;
}
double Rect::Area_double() {
	return mLength * mWidth;
}
Rect::~Rect() {
	cout << "这是析构函数" << endl;
}
