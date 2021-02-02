#pragma once
#include"NhanVienKyThuat.h"
#include"NhanVienThuKy.h"
#include<vector>
class CongTy
{
private:
	//vector quan ly cac nhan vien cu ( tu file input)
	vector<NhanVienThuKy> dsNVThuKy;
	vector<NhanVienKyThuat> dsNVKyThuat;
	
	// vector nay quan ly danh sach cac nhan vien moi
	vector <NhanVienKyThuat> dsNhanVienKTMoi;
	vector <NhanVienThuKy> dsNhanVienTKMoi; 
public:
	friend ostream& operator <<(ostream& os, const CongTy& cty);
	friend istream& operator >>(istream& is, CongTy& cty);
	void NhanVienXuatSac();

	void ThemNhanVienMoi();
	void XuatNhanVienMoi();

};

ostream& operator <<(ostream& os, const CongTy& cty)
{
	int i_KT = 0;
	int i_TK = 0;
	while (i_KT < cty.dsNVKyThuat.size() || i_TK < cty.dsNVThuKy.size())
	{
		if (rand() % 2 == 0)
		{
			if (i_KT < cty.dsNVKyThuat.size())
			{
				os << "nvkt: " << cty.dsNVKyThuat[i_KT] << endl;
				i_KT++;
			}
		}
		else
		{
			if (i_TK < cty.dsNVThuKy.size())
			{
				os << "nvtk: " << cty.dsNVThuKy[i_TK] << endl;
				i_TK++;
			}
		}
	}

	return os;
}
istream& operator >>(istream& is, CongTy& cty)
{
	char* buf = new char[MAX];
	while (!is.eof())
	{
		is.get(buf, MAX, ':');
		is.ignore(2);
		if (strcmp(buf, NhanVienKyThuat::getFlag()) == 0)
		{
			NhanVienKyThuat nvkt;
			is >> nvkt;
			cty.dsNVKyThuat.push_back(nvkt);
		}
		if (strcmp(buf, NhanVienThuKy::getFlag()) == 0)
		{
			NhanVienThuKy nvtk;
			is >> nvtk;
			cty.dsNVThuKy.push_back(nvtk);
		}
		is.ignore(1);
	}
	
	delete[] buf;
	return is;
}

void CongTy::NhanVienXuatSac()
{
	for (int i = 0; i < dsNVKyThuat.size(); i++)
	{
		if (dsNVKyThuat[i].get_slSangKien() >= 6)
		{
			cout << dsNVKyThuat[i].getFlag() << ": ";
			cout << dsNVKyThuat[i] << endl;
		}

	}
	for (int j = 0; j < dsNVThuKy.size(); j++)
	{
		if (dsNVThuKy[j].get_slBaoCao() >= 12)
		{
			cout << dsNVThuKy[j].getFlag() << ": ";
			cout << dsNVThuKy[j] << endl;
		}
	}
}

void CongTy::ThemNhanVienMoi()
{
	cout << "===============Them nhan vien moi=============\n ";
	int m;
	cout << "Nhap so luong nhan vien moi xin vao: ", cin >> m;
	int i = 0;
	while (i < m)
	{
		cout << "\tNhan vien ky thuat: bam 1\n\tNhan vien thu ky: bam 2";
		int n;
		cout << "\n\t\t   Nhap:";
		cin >> n;

		if (n == 1)
		{
			cout << "Nhap thong tin nhan vien ky thuat moi: "<<endl;
			NhanVienKyThuat temp;
			temp.NhapNhanVienKTMoi();
			dsNhanVienKTMoi.push_back(temp);
			i++;
		}
		else if (n == 2)
		{
			cout << "Nhap thong tin nhan vien thu ky moi: "<<endl;
			NhanVienThuKy temp;
			temp.nhapNhanVienTKMoi();
			dsNhanVienTKMoi.push_back(temp);
			i++;
		}
		else
		{
			cout << "cu phap ko hop le";
			break;
		}
		
	}
}

void CongTy::XuatNhanVienMoi()
{
	for (int i = 0; i < dsNhanVienKTMoi.size(); i++)
	{
		dsNhanVienKTMoi[i].xuatNhanVienKTMoi();
	}
	for (int i = 0; i < dsNhanVienTKMoi.size(); i++)
	{
		dsNhanVienTKMoi[i].xuatNhanVienTKMoi();
	}
}
