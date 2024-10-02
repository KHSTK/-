#pragma once
#include"Container.h"
class Cube :public Container{
public:
	Cube(double s);
	double Area();
	double Volume();
};