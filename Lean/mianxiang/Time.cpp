#include<iostream>
#include "Time.h"
using namespace std;
Time Time:: Create() {
	cout << "ÇëÊäÈëÊ±·ÖÃë:" << endl;
	Time t;
	cin >> t.hour >> t.minute >> t.sec;
	return t;
}
void Time :: ShowTime() {
	cout << hour << ":" << minute << ":" << sec << endl;
}
					