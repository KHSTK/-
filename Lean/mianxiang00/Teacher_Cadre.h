#pragma once
#include"Teacher.h"
#include"Cadre.h"
class Teacher_Cadre:Teacher,Cadre {
private:
	int wages;
public:
	Teacher_Cadre();
	~Teacher_Cadre();
	void show();
};