#pragma once
#include"Hinh.h"
class HinhChuNhat : public Hinh
{
private:
	double chieuDai;
	double chieuRong;
public:
	string getName()
	{
		string a = "HCN";
		return a;
	}
	HinhChuNhat(double d, double r)
	{
		this->chieuDai = d;
		this->chieuRong = r;
	}

	virtual void Xuat(ostream& os)
	{
		Hinh::Xuat(os);
		os << HinhChuNhat::chuVi()<<endl;
		os << HinhChuNhat::dienTich()<<endl;

	}
	double dienTich()
	{
		return chieuDai * chieuRong;
	}
	double chuVi()
	{
		return chieuDai * 2 + chieuRong * 2;
	}
	friend ostream& operator<<(ostream& os, HinhChuNhat& h);
};

ostream& operator<<(ostream& os, HinhChuNhat& h)
{
	h.Xuat(os);
	return os;
}