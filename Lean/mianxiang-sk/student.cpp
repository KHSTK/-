#include<iostream>
#include<cstring>
#include"Student415.h"
Student::Student(const char* id, const char* name , const char* sex) {
	strcpy(this->id,id);
	strcpy(this->name, name);
	strcpy(this->sex, sex);
	stuCount++;
}
Student::~Student() {
	stuCount--;
}
int Student::GetCount() {
	return stuCount;
}
int Student::stuCount = 0;