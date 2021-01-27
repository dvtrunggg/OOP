#pragma once
#include"TaiKhoan.h"
class TaiKhoanTietKiem : public TaiKhoan
{
private:
	int kyHan;
	float laiSuat;
	int soThangGui;
public:
	void Nhap();
	void Xuat();
	void napTien(float);
	int checkKyHan();
	void rutTien(float);
	int soThangGuiThem(int);
	float tongDu();

};

