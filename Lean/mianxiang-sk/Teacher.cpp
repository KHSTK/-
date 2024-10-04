#include<iostream>
#include"Teacher.h"
using namespace std;
Teacher::Teacher()
{
}
Teacher::Teacher(string n,string t, string tno) {
	name = n;
	title = t;
	telno = tno;
}
string Teacher::ToString() {
	return "name:" + name + " title:" + title + " telno:" + telno;
}