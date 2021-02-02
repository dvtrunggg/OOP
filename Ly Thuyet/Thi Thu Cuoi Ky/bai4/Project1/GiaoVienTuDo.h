#pragma once
#include"GiaoVien.h"
class GiaoVienTuDo : public GiaoVien
{
private:
	int namTotNghiep;
	string Truong;
	
public:
	void Nhap()
	{
		GiaoVien::Nhap();
		cout << " truong tot nghiep: ";
		getline(cin, Truong);
		cout << "nam tot nghiep:";
		cin >> namTotNghiep;
	}
	void Xuat()
	{
		GiaoVien::Xuat();
		cout << "truong: " << Truong << ", nam tot nghiep: " << namTotNghiep << endl;
	}
	int tienBaoHiem()
	{
		return 150000;
	}
};

