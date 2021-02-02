#pragma once
#include "HinhHocPhang.h"
class HinhTamGiac : public HinhHocPhang
{
private:
	double canh1;
	double canh2;
	double canh3;
public:
	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	friend ostream& operator<<(ostream& os, HinhTamGiac htg);
	friend istream& operator>>(istream& is, HinhTamGiac& htg);
	static const char* getFlag();

	double DienTich();
	double ChuVi();
};

void HinhTamGiac::Nhap(istream& is)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, ',');
	canh1 = atof(buf);
	is.ignore(1);

	is.get(buf, MAX, ',');
	canh2 = atof(buf);
	is.ignore(1);

	is.get(buf, MAX);
	canh3 = atof(buf);
	is.ignore(1);

	delete[] buf;

}

void HinhTamGiac::Xuat(ostream& os)
{
	os << canh1 << ", " << canh2 << ", " << canh3;
}
ostream& operator<<(ostream& os, HinhTamGiac htg)
{
	htg.Xuat(os);
	return os;
}

istream& operator>>(istream& is, HinhTamGiac& htg)
{
	htg.Nhap(is);
	return is;
}

const char* HinhTamGiac::getFlag()
{
	return "htg";
}

double HinhTamGiac::ChuVi()
{
	return canh1 + canh2 + canh3;
}

double HinhTamGiac::DienTich()
{
	double p = HinhTamGiac::ChuVi() / 2;
	return sqrt(p * (p - canh1) * (p - canh2) * (p - canh3));
}
