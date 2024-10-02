#include<iostream>
#include<cstring>
#include"Teacher.h"
using namespace std;
Teacher::Teacher() {
	name = new char[10];
	strcpy(name,"教师");
	age = 30;
	sex = new char[10];
	strcpy(sex, "男");
	dz= new char[20];
	strcpy(dz, "长春工程学院");
	dh=new char[20];
	strcpy(dh, "193XXXX6817");
	title= new char[20];
	strcpy(title, "职称1");
}
Teacher::~Teacher(){}
void Teacher::display() {
	cout << " 姓名：" << name << " 年龄：" << age << " 性别：" << sex << " 地址:" << dz << " 电话:" << dh << " 职称:" << title << endl;
}