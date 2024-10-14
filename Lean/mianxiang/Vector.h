#pragma once
class Vector {
protected:
	int x, y;
public:
	Vector();
	Vector(int i, int j);
	void disp();
	friend Vector add(Vector& v1, Vector& v2);
	friend Vector sub(Vector& v1, Vector& v2);
};