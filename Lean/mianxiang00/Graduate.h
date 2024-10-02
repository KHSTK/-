#pragma once
#include"Student.h"
class Graduate :public Student  //声明公有派生类
{
public:
	Graduate(int, string, float, float);
	void Display();               //声明输出函数
private:
	float pay;
};

