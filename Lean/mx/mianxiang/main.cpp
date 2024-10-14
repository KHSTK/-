#include<iostream>
#include"Student.h"
#include"Person.h"
#include"Vector.h"
#include"Line.h"
using namespace std;
//Vector add(Vector& v1, Vector& v2)
//{
//	Vector v;
//	v.x = v1.x + v2.x;
//	v.y = v1.y + v2.y;
//	return v;
//}
//Vector sub(Vector& v1, Vector& v2)
//{
//	Vector v;
//	v.x = v1.x - v2.x;
//	v.y = v1.y - v2.y;
//	return v;
//}
Point SetPoint(const Line& l1, const Line& l2) {
	Point p;
	p.x = (l2.b - l1.b) / (l1.a - l2.a);
	p.y = l1.a * p.x + l1.b;
	return p;
}
int main() {
	/*Student s1("张三", 90),s2("李四",80),s3("王五",92);
	cout<<"总分为:"<<Student::Sum<<endl;
	cout<<"平均分为:"<<Student::Sum/Student::s<<endl;*/
	/*Person p1, p2, p3, p4;
	Person::display();
	p4.display();
	p3.print_no();*/
	//Vector v1(10, 20), v2(4, 5), v3;
	//v3 = add(v1, v2);
	//cout << "输出结果：" << endl;
	//cout << " "; v1.disp(); cout << "+"; v2.disp();
	//cout << "="; v3.disp(); cout << endl;
	//v3 = sub(v1, v2);
	//cout << " "; v1.disp(); cout << "-"; v2.disp();
	//cout << "="; v3.disp(); cout << endl;
	Line l1(2, 3);
	Line l2(-1, 5);
	l1.Print();
	l2.Print();
	Point p = SetPoint(l1, l2);
	cout << "交点是 (" << p.x << ", " << p.y << ")" << endl;
	return 0;
}