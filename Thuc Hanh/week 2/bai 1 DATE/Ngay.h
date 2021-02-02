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
};

