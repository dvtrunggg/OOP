#pragma once
#include<vector>
#include"SoTietKiem.h"
#include"CDate.h"

class CNganHang
{
private:
	vector<SoTietKiemCKH> stkCoKiHan;
	vector<SoTietKiemKKH> stkKhongKiHan;
public:
	friend istream& operator>>(istream& is, CNganHang& nganHang);
	friend ostream& operator<<(ostream& os, const CNganHang& nganHang);
	double tongTienLai();
};

