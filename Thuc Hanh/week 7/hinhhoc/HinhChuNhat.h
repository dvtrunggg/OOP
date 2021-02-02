#pragma once
#include "HinhHocPhang.h"
class HinhChuNhat : public HinhHocPhang
{
private:
	float chieuDai;
	float chieuRong;
public:
	friend ostream& operator<<(ostream& os, const HinhChuNhat& hcn);
	friend istream& operator>>(istream& is, HinhChuNhat& hcn);
	static const char* getFlag();
	float DienTich();
	float ChuVi();
};

ostream& operator<<(ostream& os, const HinhChuNhat& hcn)
{
	os << hcn.chieuDai << ", " << hcn.chieuRong;
	return os;
}

istream& operator>>(istream& is, HinhChuNhat& hcn)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, ',');
	hcn.chieuDai = atof(buf);
	is.ignore(1);
	is.get(buf, MAX);
	hcn.chieuRong = atof(buf);
	is.ignore(1);
	delete[] buf;
	return is;
}

const char* HinhChuNhat::getFlag()
{
	return "hcn";
}

float HinhChuNhat::DienTich()
{
	return chieuDai * chieuRong;
}

float HinhChuNhat::ChuVi()
{
	return (chieuDai + chieuRong) * 2;
}
