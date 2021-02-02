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
		if (year % 4 == 0 && year % 100 != 0)
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