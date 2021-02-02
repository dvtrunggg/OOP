#pragma once
#include"GiaoVienThuong.h"
class GiaoVienCLC : public GiaoVienThuong
{
private:
	int update = 100000;
public:
	void Nhap()
	{
		GiaoVienThuong::Nhap();
	}
	void Xuat()
	{
		GiaoVienThuong::Xuat();
	}
	int tienBaoHiem()
	{
		return GiaoVienThuong::tienBaoHiem() + update;
	}
};




