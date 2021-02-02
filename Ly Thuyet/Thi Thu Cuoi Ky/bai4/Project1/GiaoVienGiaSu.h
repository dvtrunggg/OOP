#pragma once
#include"GiaoVien.h"
class GiaoVienGiaSu : public GiaoVien
{
private:
	string truong;
	float soNamDaHoc;
public:
	void Nhap()
	{
		GiaoVien::Nhap();
		cout << "sinh vien truong: ";
		getline(cin, truong);
		cout << "so nam da hoc:";
		cin >> soNamDaHoc;
	}
	void Xuat()
	{
		GiaoVien::Xuat();
		cout << "sinh vien truong: " << truong << ", so nam da hoc: " << soNamDaHoc << endl;
	}
	int tienBaoHiem()
	{
		return 100000;
	}
};

