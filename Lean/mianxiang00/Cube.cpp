#include<iostream>
#include"Cube.h"
using namespace std;

Cube::Cube(double a):Container(a)
{
}
double Cube::Area() {

	return 6*r*r;
}
double Cube::Volume() {
	return r*r*r;
}