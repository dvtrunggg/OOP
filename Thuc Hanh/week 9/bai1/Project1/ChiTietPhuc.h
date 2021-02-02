#pragma once
#include"ChiTietMay.h"
#include<vector>
class ChiTietPhuc : public ChiTietMay
{
private:
	vector<ChiTietMay*> DSChiTiet;
public:

	ChiTietPhuc(string);
	double TinhTrongLuong();
	double TinhGiaThanh();
	void ThemChiTiet(ChiTietMay* );
	void Xuat(ostream& os);
	~ChiTietPhuc();
};

ChiTietPhuc::ChiTietPhuc(string id)
{
	this->ID = id;
}

double ChiTietPhuc:: TinhTrongLuong()
{
	double sum = 0;
	for (int i = 0; i < DSChiTiet.size(); i++)
	{
		sum += DSChiTiet[i]->TinhTrongLuong();
	}
	return sum * 1.1;
}

double ChiTietPhuc::TinhGiaThanh()
{
	double sum = 0;
	for (int i = 0; i < DSChiTiet.size(); i++)
	{
		sum += DSChiTiet[i]->TinhGiaThanh();
	}
	return sum * 1.2;
}

void ChiTietPhuc::ThemChiTiet(ChiTietMay* ctm)
{
	if (ctm != NULL)
	{
		DSChiTiet.push_back(ctm);
	}
}

void ChiTietPhuc::Xuat(ostream& os)
{
	for (int i = 0; i < DSChiTiet.size(); i++)
	{
		DSChiTiet[i]->Xuat(os);
	}
}

ChiTietPhuc::~ChiTietPhuc()
{
	for (int i = 0; i < DSChiTiet.size(); i++)
	{
		delete DSChiTiet[i];
	}
}