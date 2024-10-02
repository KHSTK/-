#pragma once
#include<string>
using namespace std;
class Student            //定义基类
{
public:
    Student(int, string, float);
    virtual void Display();      //声明输出函数
protected:           //受保护成员，派生类可访问
    int num;
    string name;
    float score;
};
