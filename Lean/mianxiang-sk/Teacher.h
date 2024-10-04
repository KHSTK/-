#pragma once
#include<string>
using namespace std;
class Teacher {
protected:
	string name;
	string title;
	string telno;
public:
	Teacher();
	Teacher(string n, string t, string tno);
	string ToString();

};