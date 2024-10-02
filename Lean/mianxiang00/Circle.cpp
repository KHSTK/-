#include<iostream>
#include"Circle.h"
using namespace std;
//Circle::Circle()
//{
//	radius = 1;
//}
//Circle::Circle(double r)
//{
//	radius = r;
//}
//Circle::~Circle() {}
//void Circle::SetRadius(double r)
//{
//	radius = r;
//}
//double Circle::GetRadius()
//{
//	return radius;
//}
//double Circle::Area() 
//{
//	return PI * radius * radius;
//}
Circle::Circle(double a):Container(a)
{
}
double Circle::Area() {
	return 4 * PI * r * r;
}

double Circle::Volume() {
	return (4 * PI * r * r * r) / 3;
}