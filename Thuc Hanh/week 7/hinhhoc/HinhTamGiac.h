#pragma once
#include "HinhHocPhang.h"
class HinhTamGiac : public HinhHocPhang
{
private:
	float canh1;
	float canh2;
	float canh3;
public:
	friend ostream& operator<<(ostream& os, const HinhTamGiac& htg);
	friend istream& operator>>(istream& is, HinhTamGiac& htg);
	static const char* getFlag();

	float DienTich();
	float ChuVi();
};

ostream& operator<<(ostream& os, const HinhTamGiac& htg)
{
	os << htg.canh1 << ", " << htg.canh2 << ", " << htg.canh3;
	return os;
}

istream& operator>>(istream& is, HinhTamGiac& htg)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, ',');
	htg.canh1 = atof(buf);
	is.ignore(1);

	is.get(buf, MAX, ',');
	htg.canh2 = atof(buf);
	is.ignore(1);

	is.get(buf, MAX);
	htg.canh3 = atof(buf);
	is.ignore(1);

	delete[] buf;
	return is;
}

const char* HinhTamGiac::getFlag()
{
	return "htg";
}

float HinhTamGiac::ChuVi()
{
	return canh1 + canh2 + canh3;
}

float HinhTamGiac::DienTich()
{
	float p = HinhTamGiac::ChuVi() / 2;
	return sqrt(p * (p - canh1) * (p - canh2) * (p - canh3));
}
