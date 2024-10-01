#pragma once       
class Time {
public://不写默认为私有private
	int hour;
	int minute;
	int sec;
	Time Create();
	void ShowTime();
};