#pragma once
#include"GiaoVien.h"
class GiaoVienThuong : public GiaoVien
{
protected:
		int namGiangDay;
		string truongDangDay;
public:
		void Nhap()
		{
			GiaoVien::Nhap();
			cout << " Truong Dang Day: ";
			getline(cin, truongDangDay);
			cout << "so nam da giang day:";
			cin >> namGiangDay;
		}
		void Xuat()
		{
			GiaoVien::Xuat();
			cout << "truong Dang Day: " << truongDangDay << ", so nam giang day: " << namGiangDay << endl;
		}
		int tienBaoHiem()
		{
			return 200000;
		}
};

