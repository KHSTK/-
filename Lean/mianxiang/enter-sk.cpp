#include<iostream>
#include"student-sk.h"
using namespace std;
int main() {
	Student astuWithDetailInfo("001", "����", 18), defaultnullStu;
	/*astuWithDetailInfo=stu.init("001","����",18);*/
	/*string strStu=astuWithDetailInfo.toString();
	cout << strStu << endl;*/
	astuWithDetailInfo.showInfo();
	defaultnullStu.showInfo();
}