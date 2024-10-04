#pragma once
#include<string>
using namespace std;
class Leader {
protected:
	string name;
	string post;
	string telno;
public:
	Leader();
	Leader(string n, string t, string tno);
	string ToString();

};