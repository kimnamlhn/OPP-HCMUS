#pragma once
#include <iostream>
#include <string.h>
#include <sstream>
#include <time.h>
#include <iostream>
using namespace std;
class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(){
		struct tm currentTime;
		time_t now = time(0);
		localtime_s(&currentTime, &now);
		this->hours = currentTime.tm_hour;
		this->minutes = currentTime.tm_min;
		this->seconds = currentTime.tm_sec;
	}
	Time(int _hours, int _minutes, int _seconds)
	{
		this->hours = _hours;
		minutes = _minutes;
		seconds = _seconds;
	}
	string toString() {
		stringstream writer;
		writer << this->hours << ":" << this->minutes << ":" << this->seconds;
		return writer.str();
	}
	int getHours() {
		return hours;
	}
	int getMinutes() {
		return minutes;
	}
	int getSeconds() {
		return seconds;
	}
};