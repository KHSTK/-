#include<iostream>
#include<cstring>
#include"Teacher.h"
using namespace std;
Teacher::Teacher() {
	name = new char[10];
	strcpy(name,"��ʦ");
	age = 30;
	sex = new char[10];
	strcpy(sex, "��");
	dz= new char[20];
	strcpy(dz, "��������ѧԺ");
	dh=new char[20];
	strcpy(dh, "193XXXX6817");
	title= new char[20];
	strcpy(title, "ְ��1");
}
Teacher::~Teacher(){}
void Teacher::display() {
	cout << " ������" << name << " ���䣺" << age << " �Ա�" << sex << " ��ַ:" << dz << " �绰:" << dh << " ְ��:" << title << endl;
}