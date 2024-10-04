#include<iostream>
#include"Teacher_Leader.h"
using namespace std;
Teacher_Leader::Teacher_Leader(){}
Teacher_Leader::Teacher_Leader(string n, string t, string p, string tno, int w) 
	:Teacher(n, t, tno), Leader(n, p, tno), wage(w)
{
}
string Teacher_Leader::ToString() {
	return Teacher::ToString() + ",Post:" + post + ",wage" + to_string(wage);
}