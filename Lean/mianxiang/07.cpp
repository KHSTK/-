#include<iostream>
#include<time.h>
using namespace std;
double Ave(int *a, int l) {
	int s = 0;
	int i=0;
	for (i = 0; i < l; i++) {
		s += a[i];
	}
		return (s*1.0 / l);
}
double Ave(double a[], int l) {
	double s=0;
	int i;
	for (i = 0; i < l; i++) {
		s += a[i];
	}
	return (s / l);
}
int main() {
	int a[5];
	int i;
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
			a[i]= rand() % 10 + 1;
	}
	cout << "该数组是" << endl;
	for (i = 0; i < 5; i++) {
			cout << a[i] << "\t";
		}
	cout << endl;
	cout << "该数组是的平均数是" <<Ave(a,5) << endl;
	double b[5];
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		b[i] =0.23*(rand() % 10 + 1);
	}
	cout << "该数组是" << endl;
	for (i = 0; i < 5; i++) {
		cout << b[i] << "\t";
	}
	cout << endl;
	cout << "该数组是的平均数是" << Ave(b, 5) << endl;
	}
	
