#include<iostream>
#include"Leader.h"
using namespace std;
Leader::Leader()
{
}
Leader::Leader(string n, string p, string tno) {
	name = n;
	post = p;
	telno = tno;
}
string Leader::ToString() {
	return " name:" + name + " post:" + post + " telno:" + telno;
}