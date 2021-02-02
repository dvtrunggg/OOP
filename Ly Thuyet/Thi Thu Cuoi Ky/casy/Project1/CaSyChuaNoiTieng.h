#pragma once
#include"CaSy.h"
class CaSyChuaNoiTieng : public CaSy
{
public:
	void Nhap()
	{
		CaSy::Nhap();
	}
	void Xuat()
	{
		CaSy::Xuat();
		cout << "\nLuong: " << CaSyChuaNoiTieng::tinhLuong();
	}

	int tinhLuong()
	{
		return 3000000 + 500000 * soNam + 1000 * soDiaBan + 150000 * soBuoiTrinhDien;
	}

};
