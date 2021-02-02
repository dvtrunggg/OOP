#include <iostream>
#include<iomanip>
using namespace std;

class ThoiGian
{
	int hours, min, sec;
public:
	ThoiGian();
	ThoiGian(const int& s);
	ThoiGian(const int& s, const int& m);
	ThoiGian(const int& s, const int& m, const int& h);
	~ThoiGian();
	void Xuat();
	ThoiGian operator +(const ThoiGian& t);
	friend ThoiGian operator +(const int& time, const ThoiGian& t);
	ThoiGian operator -(const ThoiGian& t);
	friend ThoiGian operator -(const int& time, const ThoiGian& t);
	void rutGon(int& gio, int& phut, int& giay);
	friend ostream& operator <<(ostream& os, const ThoiGian& t);
	bool operator <=(const ThoiGian& t);
	friend bool operator<=(const int& n, const ThoiGian& time);
};
