#include<iostream>
#include"student-sk.h"
using namespace std;
int main() {
	Student astuWithDetailInfo("001", "张三", 18), defaultnullStu;
	/*astuWithDetailInfo=stu.init("001","张三",18);*/
	/*string strStu=astuWithDetailInfo.toString();
	cout << strStu << endl;*/
	astuWithDetailInfo.showInfo();
	defaultnullStu.showInfo();
}