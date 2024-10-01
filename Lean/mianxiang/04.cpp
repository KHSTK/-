#include<iostream>
using namespace std;
//int myMax(int x, int y) {
//	return x > y ? x : y;
//}
//int main() {
//	//cout << "Welcome to C++" << endl;
//	int a, b;
//	cout << "Please enter two integers:" <<endl;
//	cin >> a >> b;
//	cout << "The bigger is " << myMax(a, b) << endl;
//	return 0;
//}
class Person
{public:
	void setlnfo()
	{
		cout << "Input info to name,sex,age:\n";
		cin >> name >> sex >> age;
	}
	void show() {
		cout << "name:" << name;
		cout << "sex:" << sex;
		cout << "age" << age << endl;
	}
private:
	char name[20];
	char sex[2];
	int age;
};
int main() {
	Person person1, person2;
	person1.setlnfo();
	person2.setlnfo();
	person1.show();
	person2.show();
	return 0;
}