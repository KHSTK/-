#include<iostream>
#include<cstring>
#include"Cadre.h"
using namespace std;
Cadre::Cadre() {
	name = new char[10];
	strcpy(name, "�ɲ�");
	age = 30;
	sex = new char[10];
	strcpy(sex, "��");
	dz = new char[20];
	strcpy(dz, "��������ѧԺ");
	dh = new char[20];
	strcpy(dh, "193XXXX2214");
	post = new char[20];
	strcpy(post, "ְ��1");
}
Cadre::~Cadre() {}