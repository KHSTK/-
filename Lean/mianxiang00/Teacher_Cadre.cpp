#include<iostream>
#include"Teacher_Cadre.h"
using namespace std;
Teacher_Cadre::Teacher_Cadre() {
	wages = 9000;
}
Teacher_Cadre::~Teacher_Cadre(){}
void Teacher_Cadre::show() {
	Teacher::display(); 
	cout << " 职务:" << Cadre::post << " 工资:" << wages << endl;
}