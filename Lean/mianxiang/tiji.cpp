#include<iostream>
using namespace std;
#include"tiji.h"
tiji tiji::Create() {
	tiji V;
	cin >> V.length>>V.width>>V.heigth;
	return V;
}
int tiji::Showtiji() {
	return length * width * heigth;
}
