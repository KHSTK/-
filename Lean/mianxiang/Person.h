#pragma once
class Person {
	static int total;
	static int Max_number;
public:
	Person();
	static void display();
	void print_no();
private:
	char* name;
	int S_number;
};