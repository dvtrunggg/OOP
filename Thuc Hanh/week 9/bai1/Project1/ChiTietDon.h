#pragma once
#include"ChiTietMay.h"
class ChiTietDon : public ChiTietMay
{
private:
	double TrongLuong;
	double GiaThanh;
public:
	ChiTietDon(string, double, double);
	double TinhTrongLuong();
	double TinhGiaThanh();
	void Xuat(ostream& os);
};
ChiTietDon::ChiTietDon(string id, double tl, double Gia)
{
	this->ID = id;
	this->TrongLuong = tl;
	this->GiaThanh = Gia;
}

double ChiTietDon::TinhTrongLuong()
{
	return TrongLuong;
}

double ChiTietDon::TinhGiaThanh()
{
	return GiaThanh;
}

void ChiTietDon::Xuat(ostream& os)
{
	os << "ID: " << this->ID << " Trong luong: " << this->TrongLuong << " Gia thanh: " << this->GiaThanh << endl;
}