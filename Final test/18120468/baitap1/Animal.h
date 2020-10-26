#pragma once
#include <iostream>

using namespace std;
class Animal
{
private:
	//1: male
	//0: female
	int sex;

public:
	static long numberOfMilk;

	virtual void getBirth() = 0;
	virtual void getMilk() = 0;
	virtual void sound() = 0;
	//1: cow 
	//2 sheep 
	//3 goat
	int getSex()
	{
		return sex;
	}
	void setSex(int _sex)
	{
		sex = _sex;
	}

};



