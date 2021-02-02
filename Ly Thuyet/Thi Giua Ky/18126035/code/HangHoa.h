//Dinh Viet Trung - 18126035
#pragma once
#include"Thu.h"
class HangHoa
{
private:
	string MaBuuPham;
	string DiaChi;
	string NguoiNhan;
	float TrongLuong;
public:
	HangHoa();
	HangHoa(string, string, string, float);
	HangHoa(const HangHoa&);
	~HangHoa();
	void Nhap();
	void Xuat();
	int PhiVanChuyen();
};

