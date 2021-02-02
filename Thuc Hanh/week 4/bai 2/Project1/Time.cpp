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

void ThoiGian::rutGon(int& gio, int& phut, int& giay)
{
	if (giay > 60)
	{
		phut += giay / 60;
		giay %= 60;
	}
	if (phut > 60)
	{
		gio += phut / 60;
		phut %= 60;
	}
	if (giay < 0)
		giay = 0;
	if (phut < 0)
		phut = 0;
	if (gio < 0)
		gio = 0;

}
ThoiGian ThoiGian:: operator +(const ThoiGian& t)
{
	ThoiGian result;
	result.hours = hours + t.hours;
	result.min = min + t.min;
	result.sec = sec + t.sec;
	result.rutGon(result.hours, result.min, result.sec);
	return result;
}
ThoiGian operator +(const int& time, const ThoiGian& t)
{
	ThoiGian th(time);
	ThoiGian result = th + t;
	result.rutGon(result.hours, result.min, result.sec);
	return result;
}
ThoiGian ThoiGian::operator -(const ThoiGian& t)
{
	ThoiGian result;
	result.hours = hours - t.hours;
	result.min = min - t.min;
	result.sec = sec - t.sec;
	result.rutGon(result.hours, result.min, result.sec);
	return result;
}
ThoiGian operator -(const int& time, const ThoiGian& t)
{
	ThoiGian th(time);
	ThoiGian result = th - t;
	result.rutGon(result.hours, result.min, result.sec);
	return result;
}
bool ThoiGian ::operator <=(const ThoiGian& t)
{
	if (hours == t.hours && min == t.min && sec == t.sec)
		return true;
	else
	{
		if (hours < t.hours)
		{
			return true;
		}
		if(hours == t.hours)
		{
			if (min < t.min)
			{
				return true;
			}
			if (min == t.min)
			{
				if (sec < t.sec)
				{
					return true;
				}
			}
		}
		return false;
	}
}
bool operator <=(const int& n, const ThoiGian& time)
{
	ThoiGian th(n);
	if (th <= time)
		return true;
	return false;
}
ostream& operator <<(ostream& os, const ThoiGian& t)
{
	os << setfill('0') << setw(2) << t.hours << ":" << setfill('0') << setw(2) << t.min << ":" << setfill('0') << setw(2) << t.sec;
	return os;
}