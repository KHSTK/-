#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
Student::Student(const char* n, double g) {
	strcpy(name, n);
	Gmark = g;
	Sum += g;
	s ++;
}
double Student::Sum = 0;
double Student::s = 0;