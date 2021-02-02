#include <iostream>
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
};
