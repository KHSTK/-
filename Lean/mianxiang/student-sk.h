#pragma once
#include<string>
using namespace std;
class Student{
	string no;
	string name;
	int age;
public:
	Student init(string sno,string sname,int sage);
	Student();//���캯������
	Student(string sno, string sname, int sage);
	inline string toString();
	void showInfo();
private:
	inline void showSplit();
	//void somemethod() {
	//	cout << "default inline" << endl;
	//}
};