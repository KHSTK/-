#pragma once
class Teacher {
protected:
	char* name;
	int age;
	char* sex;
	char* dz;
	char* dh;
	char* title;
public:
	Teacher();
	~Teacher();
	void display();
};

