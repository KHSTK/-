#pragma once
class Student {
protected:
	char name[10];
	double Gmark;
public:
	Student(const char* n, double g);
	static double Sum;
	static double s;
};