#include<iostream>
#include"Teacher_Cadre.h"
using namespace std;
Teacher_Cadre::Teacher_Cadre() {
	wages = 9000;
}
Teacher_Cadre::~Teacher_Cadre(){}
void Teacher_Cadre::show() {
	Teacher::display(); 
	cout << " ְ��:" << Cadre::post << " ����:" << wages << endl;
}