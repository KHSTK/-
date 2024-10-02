#include<iostream>
#include<cstring>
#include"Cadre.h"
using namespace std;
Cadre::Cadre() {
	name = new char[10];
	strcpy(name, "干部");
	age = 30;
	sex = new char[10];
	strcpy(sex, "男");
	dz = new char[20];
	strcpy(dz, "长春工程学院");
	dh = new char[20];
	strcpy(dh, "193XXXX2214");
	post = new char[20];
	strcpy(post, "职务1");
}
Cadre::~Cadre() {}