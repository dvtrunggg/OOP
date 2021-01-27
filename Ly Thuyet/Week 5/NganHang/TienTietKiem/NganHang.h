#pragma once
#include"SoKhongKyHan.h"
#include"SoKyHan.h"
#include"CDate.h"
#include<vector>
class NganHang
{
private:
	vector <SoKhongKyHan> koKyHan;
	vector <SoKyHan> kyHan;
public:
	NganHang();
	NganHang(SoKhongKyHan a, SoKyHan b);
	float TongTienLai();
	friend ostream& operator<<(ostream& out, const NganHang& a);
	friend istream& operator>>(istream& in, const NganHang& a);
};

