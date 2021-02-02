#pragma once
#include"ChiTietMay.h"
#include"vector"
class CoMay
{
private:
	vector<ChiTietMay*> DSChiTiet;
public:
	void ThemChiTietMay(ChiTietMay* ctm)
	{
		if (ctm != NULL)
			DSChiTiet.push_back(ctm);
	}

	double TrongLuong()
	{
		double sum = 0;
		for (int i = 0; i < DSChiTiet.size(); ++i)
		{
			sum += this->DSChiTiet[i]->TinhTrongLuong();
		}
		return sum * (1.1);
	}

	double GiaThanh()
	{
		double sum = 0;
		for (int i = 0; i < DSChiTiet.size(); ++i)
		{
			sum += this->DSChiTiet[i]->TinhGiaThanh();
		}
		return sum * (1.2);
	}

	friend ostream& operator<< (ostream& os, const CoMay& a);
};

ostream& operator<< (ostream& os, const CoMay& a)
{
	for (int i = 0; i < a.DSChiTiet.size(); ++i)
	{
		a.DSChiTiet[i]->Xuat(os);
	}

	return os;
}

