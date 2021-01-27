#pragma once
#include"NhanVien.h"
class NhanVienQuanLy : public NhanVien
{
private:
	int Thuong;
	float heSo;
public:
	void Nhap();
	void Xuat();
	int Luong();
};

