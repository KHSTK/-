#pragma once
class Clock {
public:
	Clock();
	Clock(int, int, int);
	friend void display(const Clock&);
private:
	int hour;
	int minute;
	int second;
};