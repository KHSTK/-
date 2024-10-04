#pragma once
#include"Teacher.h"
#include"Leader.h"
class Teacher_Leader :public Teacher, public Leader {
private:
	int wage;
public:
	Teacher_Leader();
	Teacher_Leader(string n, string t, string p, string tno, int w);
	string ToString();
};