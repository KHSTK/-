#include<iostream>
#include"Container.h"
#include"Cube.h"
////#include"Teacher_Cadre.h"
//#include"Graduate.h"
////#include"Student.h"
#include"Circle.h"
#include"Cylinder.h"
double CArea(Container& p) {
	return p.Area();
}
double CVolume(Container& p) {
	return p.Volume();
}
using namespace std;
int main() {
	/*Teacher_Cadre tc1;
	tc1.show();*/
		//Student stud(1001, "Li", 87.5);
		//Graduate grad(2001, "Wang", 98.5, 563.5);
		//Student* pt = &stud;
		//pt->Display();
		//pt = &grad;
		//pt->Display();
	Container c(4);
	Cube c1(5);//������߳�
	cout << "���������Ϊ:" << CArea(c1) <<",���Ϊ:"<<CVolume(c1) << endl;
	Circle c2(10);//����뾶
	cout << "�������Ϊ:" << CArea(c2) << ",���Ϊ:" << CVolume(c2) << endl;
	Cylinder c3(6,9);//Բ����뾶�͸�
	cout << "Բ�������Ϊ:" << CArea(c2) << ",���Ϊ:" << CVolume(c2) << endl;
	return 0;
}