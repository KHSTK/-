#include<iostream>
#include<string>
#include"string.h"
#include"CountStr.h"
using namespace std;
CountStr::CountStr() {
	count = 0;
}
void CountStr::GetString() {
	CountStr();
	cout << "�������ַ�" << endl;
	char c[100];
	cin >> c;
	for (int i = 0; c[i] != '\0'; i++) {
		count++;
	}
	cout << "�ַ�������Ϊ" << Length() << endl;
}
int CountStr::Length() {
	return count;
}