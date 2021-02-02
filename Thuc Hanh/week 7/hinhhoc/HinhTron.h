#pragma once
#include "HinhHocPhang.h"
class HinhTron : public HinhHocPhang
{
private:
	float banKinh;
public:
	friend ostream& operator<<(ostream& os, const HinhTron& htr);
	friend istream& operator>>(istream& is, HinhTron& htr);
	static const char* getFlag();
	float DienTich();
	float ChuVi();
};

ostream& operator<<(ostream& os, const HinhTron& htr)
{
	os << htr.banKinh;
	return os;
}

istream& operator>>(istream& is, HinhTron& htr)
{
	char* buf = new char[MAX];
	is.get(buf, MAX);
	htr.banKinh = atof(buf);
	is.ignore(1);

	delete[] buf;
	return is;
}

const char* HinhTron::getFlag()
{
	return "htr";
}

float HinhTron::DienTich()
{
	return pi * banKinh * banKinh;
}

float HinhTron::ChuVi()
{
	return 2 * pi * banKinh;
}