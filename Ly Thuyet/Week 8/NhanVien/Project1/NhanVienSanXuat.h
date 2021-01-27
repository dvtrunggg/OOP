#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
private:
	int soSanPham;
public:
	void Nhap();
	void Xuat();
	int Luong();
};

