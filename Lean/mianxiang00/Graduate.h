#pragma once
#include"Student.h"
class Graduate :public Student  //��������������
{
public:
	Graduate(int, string, float, float);
	void Display();               //�����������
private:
	float pay;
};

