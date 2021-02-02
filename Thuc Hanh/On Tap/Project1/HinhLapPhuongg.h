#pragma once
#include"Hinh.h"
class HinhLapPhuong : public Hinh
{
private:
	double canh;
public:
	virtual void Xuat(ostream& os)
	{
		Hinh::Xuat(os);
	}
	string getName()
	{
		return "HLP";
	}
	double dienTichTP()
	{
		return canh * canh * 6;
	}
	double theTich()
	{
		return canh * canh * canh;
	}
	friend ostream& operator<<(ostream& os, HinhLapPhuong& h);
};
ostream& operator<<(ostream& os, HinhLapPhuong& h)
{
	h.Xuat(os);
	return os;
}

