#include<iostream>
#include"student-sk.h"
#include<iomanip>
using namespace std;
string Student::toString() {
	return"Ñ§ºÅ£º" + no + ",ĞÕÃû£º" + name + ",ÄêÁä£º" + to_string(age);
}
Student Student::init(string sno, string sname, int sage) {
	Student s;
	s.no = sno;
	s.name = sname;
	s.age = sage;
	return s;
}
Student::Student(string sno, string sname, int sage) {
	no = sno;
	name = sname;
	age = sage;
}
Student::Student() {
	no = "";
	name = "";
	age = 0;
}
void Student::showSplit() {
	printf("**************************\n");
}
void Student::showInfo() {
	showSplit();
	cout <<toString() << endl;
	showSplit();
}