#include "CDate.h"

CDate* CDate::Parse(string line)
{
	CDate* tmp = new CDate();
	vector <string> str;
	vector <int> numbers;

	str = Tokenizer::Parse(line, "/");
	
	for (auto i = 0; i < str.size(); i++)
	{
		auto num = stoi(str[i]);
		numbers.push_back(num);
	}

	tmp->setDate(numbers[0], numbers[1], numbers[2]);

	return tmp;

}

CDate::CDate()
{
	this->_day = 14;
	this->_month = 10;
	this->_year = 2019;
}

CDate::CDate(int day, int month, int year)
{
	this->_day = day;
	this->_month = month;
	this->_year = year;
}

CDate::~CDate()
{

}

bool CDate::isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;

	if (year % 100 == 0)
		return false;

	if (year % 4 == 0)
		return true;
	return false;
}

bool CDate::isValidDate(int day, int month, int year)
{

	if (year < 1900 ||year > 9999)
		return false;
	if (month < 1 ||month > 12)
		return false;
	//xử lý tháng 31 ngày
	if (day < 1 || day > 31)
		return false;

	// xử lý tháng 2
	if (month == 2)
	{
		if (isLeapYear(year)) {
			if (day < 1 || day > 29)
				return false;
		}
		else {
			if (day < 1 || day > 28)
				return false;
		}
	}
	//xử lý tháng 30 ngày
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day < 1 || day > 30)
			return false;
	}

	return true;
}

string CDate::toString()
{
	stringstream writer;
	writer << this->_day << "/" << this->_month << "/" << this->_year;
	return writer.str();
}

void CDate::setDate(int day, int month, int year)
{
	if (this->isValidDate(day, month, year) == true)
	{
		this->_day = day;
		this->_month = month;
		this->_year = year;
	}
	else 
	{
		cout << "Please input correct date!" << endl;
		cout << "Attention: 1900 <= year <= 9999 " << endl;
		cin >> this;
	}
}

istream& operator>>(istream& in, CDate* p)
{
	int day, month, year;

	cout << "Input date: " << endl;
	cout << "Enter day: ";
	in >> day;
	cout << "Enter month: ";
	in >> month;
	cout << "Enter year: ";
	in >> year;
	p->setDate(day, month, year);

	return in;
}

ostream& operator<<(ostream& out, CDate* p)
{
	out << "Date: " << p->_day << "/" << p->_month << "/" << p->_year;
	return out;
}
