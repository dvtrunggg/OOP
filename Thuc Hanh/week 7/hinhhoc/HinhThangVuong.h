#pragma once
#include "HinhHocPhang.h"

class HinhThangVuong : public HinhHocPhang
{
private:
	float dayLon;
	float dayBe;
	float chieuCao;
public:
	friend ostream& operator<<(ostream& os, const HinhThangVuong& hthv);
	friend istream& operator>>(istream& is, HinhThangVuong& hthv);
	static const char* getFlag();

	float DienTich();
	float ChuVi();
};


ostream& operator<<(ostream& os, const HinhThangVuong& hthv)
{
	os << hthv.dayLon << ", " << hthv.dayBe << ", " << hthv.chieuCao;
	return os;
}

istream& operator>>(istream& is, HinhThangVuong& hthv)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, ',');
	hthv.dayLon = atof(buf);
	is.ignore(1);

	is.get(buf, MAX, ',');
	hthv.dayBe = atof(buf);
	is.ignore(1);

	is.get(buf, MAX);
	hthv.chieuCao = atof(buf);
	is.ignore(1);

	delete[] buf;
	return is;
}

const char* HinhThangVuong::getFlag()
{
	return "hthv";
}

float HinhThangVuong::DienTich()
{
	return ((dayLon + dayBe) / 2) * chieuCao;
}

float HinhThangVuong::ChuVi()
{
	float x = dayLon - dayBe;
	float CanhCheo = sqrt(chieuCao * chieuCao + x * x);
	return dayLon + dayBe + chieuCao + CanhCheo;
}

