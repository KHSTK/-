#include <iostream>
#include "student.h"
using namespace std;
Student Student::set_vaule() {
    cout << "����������ѧ�š��������꼶" << endl;
    Student s;
    cin >> s.num >> s.name >> s.gender;
    return s;
}
void Student::display()           //�����ⶨ��display��Ա����
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "gender:" << gender << endl;
}
