#pragma once
//#include"GiaoVien.h"
#include"GiaoVienCLC.h"
#include"GiaoVienGiaSu.h"
#include"GiaoVienThuong.h"
#include"GiaoVienTuDo.h"

class CongTyBaoHiem 
{
private:
	vector<GiaoVien*> dsgv;
public:
	void Nhap()
	{
		int n;
		cout << "Nhap so luong giao vien:", cin >>n;
		for (int i = 0; i < n; i++)
		{
			int loai;
			cout << "1: Giao Vien Gia Su, 2: Giao Vien Tu do";
			cout << " 3: Giao Vien Thuong, else: giao vien CLC" << endl;
			cin >> loai;

			GiaoVien* temp;
			if (loai == 1)
			{
				temp = new GiaoVienGiaSu();
			}
			else if (loai == 2)
			{
				temp = new GiaoVienTuDo();
			}
			else if (loai == 3)
			{
				temp = new GiaoVienThuong();
			}
			else
			{
				temp = new GiaoVienCLC();
			}
			temp->Nhap();
			dsgv.push_back(temp);
		}
	}
	void Xuat()
	{
		for (int i = 0; i < dsgv.size(); i++)
		{
			dsgv[i]->Xuat();
		}
	}
	int tienThuDuoc()
	{
		int sum = 0;
		for (int i = 0; i < dsgv.size(); i++)
		{
			sum+=dsgv[i]->tienBaoHiem();
		}
		return sum;
	}

};
