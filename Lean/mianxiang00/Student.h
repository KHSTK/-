#pragma once
#include<string>
using namespace std;
class Student            //�������
{
public:
    Student(int, string, float);
    virtual void Display();      //�����������
protected:           //�ܱ�����Ա��������ɷ���
    int num;
    string name;
    float score;
};
