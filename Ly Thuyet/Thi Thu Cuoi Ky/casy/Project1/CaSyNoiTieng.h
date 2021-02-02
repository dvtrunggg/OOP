#pragma once
#include"CaSy.h"

class CaSyNoiTieng : public CaSy
{
private:
	int soGameShow;
public:
	void Nhap()
	{
		CaSy::Nhap();
		cout << "so gameshow tham gia: ";
		cin >> soGameShow;
	}
	void Xuat()
	{
		CaSy::Xuat();
		cout << "so gameshow tham gia: " << soGameShow;
		cout << "\nLuong: " << CaSyNoiTieng::tinhLuong();
	}
	int tinhLuong()
	{
		return 5000000 + 500000 * soNam + 1200 * soDiaBan + 300000 * soBuoiTrinhDien + 500000 * soGameShow;
	}
};