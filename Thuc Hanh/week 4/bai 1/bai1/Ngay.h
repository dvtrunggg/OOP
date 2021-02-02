#include<iostream>
using namespace std;

class Ngay
{
	int year, month, day;
public:
	Ngay();
	Ngay(const int& d, const int& m, const int& y);
	Ngay(const int& d);
	~Ngay();
	void Output();
	void rutGon(int& ngay, int& thang, int& nam);
	Ngay operator +(const Ngay& ng);
	friend Ngay operator +(const int& n, const Ngay& ng);
	Ngay operator -(const Ngay& ng);
	friend Ngay operator -(const int& n, const Ngay& ng);
	Ngay operator =(const Ngay& ng);
	friend ostream& operator <<(ostream& os, const Ngay& ng);
	bool operator>(const Ngay& ng);
};

