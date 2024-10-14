#include<iostream>
#include"Vector.h"
using namespace std;
Vector::Vector() {}
Vector::Vector(int i, int j) {
	x = i, y = j;
}
void Vector::disp() {
	cout << "(" << x << "," << y << ")";
}
