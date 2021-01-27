#pragma once
#include"NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
private:
	int soNgayLamViec;
	int troCap;
public:
	void Nhap();
	void Xuat();
	int Luong();
};

