#pragma once
#include"C18126035_18VP.h"
#include"C18126035_DoGiaDung.h"
#include"C18126035_HoaMyPham.h"
#include"C18126035_LuongThucTP.h"
#include<vector>

class Sap {
private:
	vector <C18126035_Sap*> danhSach;
public:
	void Nhap()
	{
		int n;
		cout << "Nhap so luong sap: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int loai;
			cout << "Nhap: 1 - Do gia dung, 2 - Hoa my pham, 3 - Luong thuc thuc pham: ";
			cin >> loai;
			C18126035_Sap* temp;
			if (loai == 1)
			{
				temp = new C18126035_DoGiaDung();
			}
			else if (loai == 2)
			{
				temp = new C18126035_HoaMyPham();
			}
			else
			{
				temp = new C18126035_LuongThucTP();
			}
			temp->Nhap();
			danhSach.push_back(temp);
		}
	}
	
	double tongTien()
	{
		double sum = 0;
		for (int i = 0; i < danhSach.size(); i++)
		{
			sum += danhSach[i]->tongTien();
		}
		return sum;
	}
};
