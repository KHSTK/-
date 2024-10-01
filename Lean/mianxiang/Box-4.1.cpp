#include<iostream>
#include<cstring>
#include"Box-4.1.h"
using namespace std;
Box::Box() {
	length = 1;
	width = 1;
	height = 1;
	color = new char[10];
	strcpy(color, "red");
}
Box::Box(double l, double w, double h, const char* c){
	length = l;
	width = w;
	height = h;
	color= new char[10];
	strcpy(color, c);
}
Box::~Box() {
	delete color;
}
Box::Box(const Box& b){
	length = b.length;
	width = b.width;
	height =b.height;
	color = new char[10];
	strcpy(color, b.color);
}
double Box::Volume() {
	return length * width * height;
}
void Box::SetLength(double l) {
	length = l;
}

char* Box::GetColor() {
	return color;
}