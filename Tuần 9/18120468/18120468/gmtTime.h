#pragma once
#include "Time.h"


class gmtTime:public Time
{
private:
public:
	string toString(int gmt)
	{
		int _hours, _minutes, _seconds;
		_hours = Time::getHours();
		_minutes = Time::getMinutes();
		_seconds = Time::getSeconds();
		_hours = _hours + gmt;

		while (_hours >= 24)
		{
			_hours = _hours - 24;
		}
		stringstream writer;
		writer << _hours << ":" << _minutes << ":" << _seconds;
		return writer.str();
	}
};