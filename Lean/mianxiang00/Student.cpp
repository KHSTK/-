#include<iostream>
#include"Student.h"
using namespace std;
Student::Student(int n, string nam, float s)
{
	num = n; name = nam; score = s;
}
void Student::Display()
{
	cout << "num:"<< num << "\nname : " << name << "\nscore : " << score << endl << endl;
}
