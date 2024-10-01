#include <iostream>
#include "student.h"
using namespace std;
Student Student::set_vaule() {
    cout << "请依次输入学号、姓名、年级" << endl;
    Student s;
    cin >> s.num >> s.name >> s.gender;
    return s;
}
void Student::display()           //在类外定义display成员函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "gender:" << gender << endl;
}
