#include"Clock.h"
#include"Student415.h"
#include<iostream>
using namespace std;
void display(const Clock& c) {
	cout << "hour:" << c.hour << ",minute" <<c.minute<< ",second:" << c.second << endl;
}
int main() {
	//Clock c(18, 23, 36);
	//display(c);
	Student s1("001", "zhangsan", "female"), s2("002", "lisi", "male");
	cout << s1.stuCount << endl;
	Student s3("003", "zhangsan", "female"), s4("004", "lisi", "male");
	cout << s1.stuCount << endl;
	return 0;

}