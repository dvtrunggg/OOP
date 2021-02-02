//Dinh Viet Trung - 18126035
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Thu
{
private:
	string maThu;
	string diaChi;
	string nguoiNhan;
	int loaiThu;
public:
	Thu();
	Thu(string, string, string, int);
	Thu(const Thu&);
	~Thu();
	void Nhap();
	void Xuat();
	int phiVanChuyen();
};

