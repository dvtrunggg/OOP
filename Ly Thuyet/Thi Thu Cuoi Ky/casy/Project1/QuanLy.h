#pragma once
#include"CaSy.h"
#include"CaSyChuaNoiTieng.h"
#include"CaSyNoiTieng.h"
#include<vector>

class QuanLy
{
private:
	vector <CaSy*> danhSach;
public:
	void Nhap()
	{
		int n;
		cout << "Nhap so luong ca sy: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int loai;
			cout << "Nhap: 1 - Ca Sy Noi Tieng, 2 - Ca Sy Chua Noi Tieng: ";
			cin >> loai;
			CaSy* temp;
			if (loai == 1)
			{
				temp = new CaSyNoiTieng();
			}
			else
			{
				temp = new CaSyChuaNoiTieng();
			}
			temp->Nhap();
			danhSach.push_back(temp);
		}
	}
	void Xuat()
	{
		for (int i = 0; i < danhSach.size(); i++)
		{
			danhSach[i]->Xuat();
		}
	}

	void LuongCaoNhat()
	{
		int max = danhSach[0]->tinhLuong();
		cout << "tien luong cao nhat: " << endl;
		for (int i = 0; i < danhSach.size(); i++)
		{
			if (danhSach[i]->tinhLuong() > max)
			{
				max = danhSach[i]->tinhLuong();	
			}
		}

		for (int i = 0; i < danhSach.size(); i++)
		{
			if (danhSach[i]->tinhLuong() == max)
				danhSach[i]->Xuat();
		}
	}
	/*void LuongCaoNhat()
	{
		vector <CaSyNoiTieng> nt;
		vector <CaSyChuaNoiTieng> cnt;

		int a = sizeof(CaSyNoiTieng);
		int b = sizeof(CaSyChuaNoiTieng);
		for (int i = 0; i < danhSach.size(); i++)
		{
			if (sizeof(danhSach[i]) == a)
				nt.push_back(*danhSach[i]);
			if (sizeof(danhSach[i]) == b)
				cnt.push_back(*danhSach[i]);
		}
		int max = 0;
		for (int i = 0; i < nt.size(); i++)
		{
			if (nt[i].tinhLuong() > max)
				max = nt[i].tinhLuong;

		}
	}*/
};
