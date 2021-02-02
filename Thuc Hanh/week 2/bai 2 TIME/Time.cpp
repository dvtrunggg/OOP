#include "Time.h"

ThoiGian::ThoiGian()
{
	sec = min = hours = 0;
}

ThoiGian::ThoiGian(const int& s)
{
	hours = 0;
	min = 0;
	sec = s;
	if (sec > 60)
	{
		min += sec / 60;
		sec %= 60;
	}
	if (min > 60)
	{
		hours += min / 60;
		min %= 60;
	}
	if (sec < 0)
		sec = 0;
}

ThoiGian::ThoiGian(const int& m, const int& s)
{
	hours = 0;
	min = m;
	sec = s;
	if (sec > 60)
	{
		min += sec / 60;
		sec %= 60;
	}
	if (min > 60)
	{
		hours += min / 60;
		min %= 60;
	}
	if (sec < 0)
		sec = 0;
	if (min < 0)
		min = 0;
}

ThoiGian::ThoiGian(const int& h, const int& m, const int& s)
{
	sec = s;
	min = m;
	hours = h;
	if (sec > 60)
	{
		min += sec / 60;
		sec %= 60;
	}
	if (min > 60)
	{
		hours += min / 60;
		min %= 60;
	}
	if (sec < 0)
		sec = 0;
	if (min < 0)
		min = 0;
	if (hours < 0)
		hours = 0;
}

ThoiGian::~ThoiGian()
{

}

void ThoiGian::Xuat()
{
	cout <<hours << ":" <<min << ":" << sec << endl;
}
