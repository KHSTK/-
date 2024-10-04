#include<iostream>
using namespace std;
template <typename T,int size>
void bubbleSort(T a[])
{
	int i, j;
	bool change;
	for (i = size - 1, change = true; i >= 1 && change; i--) {
		change = false;
		for (j = 0; j < i, j++) {
			if (a[j] > a[j + 1]) {
				T temp; temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp; change = true;
			}
		}
	}
}