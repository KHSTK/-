#include<iostream>
#include"Cylinder.h"
using namespace std;
int main() 
{
	Cylinder c(10, 10);
	/*c.SetRadius(1);
	c.SetHeight(1);*/
	cout << c.Area() << endl << c.Volume() << endl;
	return 0;

}