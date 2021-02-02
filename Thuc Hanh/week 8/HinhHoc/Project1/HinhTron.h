#pragma once
#include "HinhHocPhang.h"
class HinhTron : public HinhHocPhang
{
private:
	double banKinh;
public:
	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	friend ostream& operator<<(ostream& os, HinhTron htr);
	friend istream& operator>>(istream& is, HinhTron& htr);
	static const char* getFlag();
	double DienTich();
	double ChuVi();
};

void HinhTron::Nhap(istream& is)
{
	char* buf = new char[MAX];
	is.get(buf, MAX);
	banKinh = atof(buf);
	is.ignore(1);

	delete[] buf;
}
void HinhTron::Xuat(ostream& os)
{
	os << banKinh;
}
ostream& operator<<(ostream& os, HinhTron htr)
{
	htr.Xuat(os);
	return os;
}

istream& operator>>(istream& is, HinhTron& htr)
{
	htr.Nhap(is);
	return is;
}

const char* HinhTron::getFlag()
{
	return "htr";
}

double HinhTron::DienTich()
{
	return pi * banKinh * banKinh;
}

double HinhTron::ChuVi()
{
	return 2 * pi * banKinh;
}