#pragma once
#include "HinhHocPhang.h"

class HinhThangVuong : public HinhHocPhang
{
private:
	double dayLon;
	double dayBe;
	double chieuCao;
public:
	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	friend ostream& operator<<(ostream& os, HinhThangVuong hthv);
	friend istream& operator>>(istream& is, HinhThangVuong& hthv);
	static const char* getFlag();

	double DienTich();
	double ChuVi();
};


void HinhThangVuong::Nhap(istream& is)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, ',');
	dayLon = atof(buf);
	is.ignore(1);

	is.get(buf, MAX, ',');
	dayBe = atof(buf);
	is.ignore(1);

	is.get(buf, MAX);
	chieuCao = atof(buf);
	is.ignore(1);

	delete[] buf;

}

void HinhThangVuong::Xuat(ostream& os)
{
	os << dayLon << ", " << dayBe << ", " << chieuCao;

}
ostream& operator<<(ostream& os, HinhThangVuong hthv)
{
	hthv.Xuat(os);
	return os;
}

istream& operator>>(istream& is, HinhThangVuong& hthv)
{
	hthv.Nhap(is);
	return is;
}

const char* HinhThangVuong::getFlag()
{
	return "hthv";
}

double HinhThangVuong::DienTich()
{
	return ((dayLon + dayBe) / 2) * chieuCao;
}

double HinhThangVuong::ChuVi()
{
	double x = dayLon - dayBe;
	double CanhCheo = sqrt(chieuCao * chieuCao + x * x);
	return dayLon + dayBe + chieuCao + CanhCheo;
}

