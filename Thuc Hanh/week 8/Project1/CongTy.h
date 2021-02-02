#pragma once
#include"NhanVienKyThuat.h"
#include"NhanVienThuKy.h"
#include"NhanVien.h"
#include<vector>
class CongTy
{
private:
	vector <NhanVien*> dsNhanVien;
	vector <string> nhanvienxuatsac;
public:

	~CongTy();	// thuộc tính là con trỏ nên phải có hàm hủy
	friend ostream& operator <<(ostream& os, const CongTy& cty);
	friend istream& operator >>(istream& is, CongTy& cty);
	void NhanVienXuatSac();
	void ThemNhanVienMoi();
	
};
CongTy::~CongTy()
{
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		delete dsNhanVien[i];
	}
}
ostream& operator <<(ostream& os, const CongTy& cty)
{
	for (int i = 0; i < cty.dsNhanVien.size(); i++)
	{
		os << *cty.dsNhanVien[i] << endl;	// because cty is NhanVien* ( a pointer) ( get value)
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
		NhanVien* temp = NULL;
		if (strcmp(buf, NhanVienKyThuat::getFlag()) == 0)
		{
			temp = new NhanVienKyThuat;
		}
		if (strcmp(buf, NhanVienThuKy::getFlag()) == 0)
		{
			temp = new NhanVienThuKy;
		}
		if (temp != NULL)
		{
			is >> *temp;
			cty.dsNhanVien.push_back(temp);
		}
		is.ignore(1);
	}
	delete[] buf;
	return is;
}
void CongTy::NhanVienXuatSac()
{
	for (int i = 0; i < this->dsNhanVien.size(); i++)
	{
		if (dsNhanVien[i]->checkXuatSac() == 1)
		{
			dsNhanVien[i]->xuat1();
		}
	}
}

void CongTy::ThemNhanVienMoi()
{
	int n;
	cout << "Nhap so luong nhan vien moi:", cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin nhan vien moi: \n\tNhan Vien Ky Thuat: 1\n\tNhan Vien Thu Ky: 2" << endl;
		int chon;
		cout << "loai nhan vien (1 or 2): ";
		cin >> chon;
		NhanVien* temp;
		if (chon == 1)
		{
			temp = new NhanVienKyThuat;
		}
		else
		{
			temp = new NhanVienThuKy;
		}
		cin.ignore();
		temp->Nhap1();
		this->dsNhanVien.push_back(temp);
		
	}
}
