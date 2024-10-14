#include<iostream>
#include"Person.h"
using namespace std;
int Person::total = 0;
int Person::Max_number = 0;
Person::Person() {
	total++;
	S_number = 1000 + total;
	Max_number = S_number;
}
void Person::display()
{
	cout << "total = "<< total << endl;
	cout << "Max_number:"<< Max_number << endl;
}
void Person::print_no()
{
	cout << S_number << endl;
}
