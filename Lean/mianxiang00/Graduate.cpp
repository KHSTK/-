#include<iostream>
#include"Graduate.h"
using namespace std;
Graduate::Graduate(int n, string nam, float s, float p) :Student(n, nam, s), pay(p) {}
void Graduate::Display()
{
	cout << "num:" << num << "\nname : " << name << "\nscore : " << score << "\npay = :" << pay << endl;
}
