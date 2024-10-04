#pragma once
class Student
{
public:
	Student(const char *id = "unknown", const char *name = "unknown", const char *sex = "male");
	virtual ~Student();
	static int GetCount();
	static int stuCount;
private:
	
	char id[12];
	char name[10];
	char sex[10];
};