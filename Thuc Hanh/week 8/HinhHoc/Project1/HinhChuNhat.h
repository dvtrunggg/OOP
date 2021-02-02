#pragma once
#include "HinhHocPhang.h"
class HinhChuNhat : public HinhHocPhang
{
private:
	double chieuDai;
	double chieuRong;
public:
	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	friend ostream& operator<<(ostream& os, HinhChuNhat hcn);
	friend istream& operator>>(istream& is, HinhChuNhat& hcn);
	static const char* getFlag();
	double DienTich();
	double ChuVi();
};

void HinhChuNhat::Nhap(istream& is)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, ',');
	chieuDai = atof(buf);
	is.ignore(1);
	is.get(buf, MAX);
	chieuRong = atof(buf);
	is.ignore(1);
	delete[] buf;
}

void HinhChuNhat::Xuat(ostream& os)
{
	os << chieuDai << ", " << chieuRong;
}

ostream& operator<<(ostream& os, HinhChuNhat hcn)
{
	hcn.Xuat(os);
	return os;
}

istream& operator>>(istream& is, HinhChuNhat& hcn)
{
	hcn.Nhap(is);
	return is;
}

const char* HinhChuNhat::getFlag()
{
	return "hcn";
}

double HinhChuNhat::DienTich()
{
	return chieuDai * chieuRong;
}

double HinhChuNhat::ChuVi()
{
	return (chieuDai + chieuRong) * 2;
}
