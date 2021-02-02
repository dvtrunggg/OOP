#include "Ngay.h"


Ngay::Ngay()
{
	year = month = day = 1;
}

int arr[] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // các ngày trong tháng ...

Ngay::Ngay(const int& d, const int& m, const int& y)
{
	year = y;
	month = m;
	day = d;
	if (month > 12){

		month = 12;
	}
	if (month < 1)
	{
		month = 1;
	}
	if (day < 1)
	{
		day = 1;
	}
	if (month == 2)
	{
		if (year % 400 == 0 ||(year % 4 == 0 && year % 100 != 0))
		{
			if (day > 29)
			{
				day = 29;
			}
			else
				if (day > 28)
				{
					day = 28;
				}
		}
	}
	else
		if (day > arr[month])
		{
			day = arr[month];
		}
}

Ngay::Ngay(const int& d)
{
	year = 1;
	month = 1;
	day = d;
	while (day > arr[month])
	{
		if (month == 2 && (year % 4 == 0 && year % 100 != 0))
		{
			if (day == 29)
			{
				break;
			}
			day--;
		}
		day -= arr[month];
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
}

Ngay::~Ngay()
{

}

void Ngay::Output()
{
	cout << day << "/" << month << "/" << year << endl;
}




void Ngay::rutGon(int& ngay, int& thang, int& nam)
{
	if (thang > 12) {

		thang = 12;
	}
	if (thang < 1)
	{
		thang = 1;
	}
	if (ngay < 1)
	{
		ngay = 1;
	}
	if (thang == 2)
	{
		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		{
			if (ngay > 29)
			{
				ngay = 29;
			}
			else
				if (ngay > 28)
				{
					ngay = 28;
				}
		}
	}
	else
		if (ngay > arr[month])
		{
			ngay = arr[month];
		}
}

Ngay Ngay::operator +(const Ngay& ng)
{
	Ngay result;
	result.year = year + ng.year;
	result.month = month + ng.month;
	result.day = day + ng.day;
	result.rutGon(result.day, result.month, result.year);
	return result;
}
Ngay operator +(const int& n, const Ngay& ng)
{
	Ngay x(n);
	Ngay result = x + ng;
	result.rutGon(result.day, result.month, result.year);
	return result;
}

Ngay Ngay::operator -(const Ngay& ng)
{
	Ngay result;
	result.year = year - ng.year;
	result.month = month - ng.month;
	result.day = day - ng.day;
	result.rutGon(result.day, result.month, result.year);
	return result;
}
Ngay operator -(const int& n, const Ngay& ng)
{
	Ngay x(n);
	Ngay result = x - ng;
	result.rutGon(result.day, result.month, result.year);
	return result;
}
Ngay Ngay :: operator =(const Ngay& ng)
{
	year = ng.year;
	month = ng.month;
	day = ng.day;
	return *this;
}
ostream& operator<<(ostream& os, const Ngay& ng)
{
	os << ng.day << "/" << ng.month << "/" << ng.year << endl;
	return os;
}
bool Ngay::operator>( const Ngay& ng)
{
	if (year > ng.year)
		return true;
	else if (year == ng.year)
	{
		if (month > ng.month)
			return true;
		else if (month == ng.month)
		{
			if (day > ng.day)
				return true;
		}
	}
	else
		return false;
}

