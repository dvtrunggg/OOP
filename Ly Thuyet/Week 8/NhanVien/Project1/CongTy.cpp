#include "CongTy.h"

CongTy* CongTy::Instance = NULL;
void CongTy::Nhap()
{
	int n;
	cout << "Nhap so luong nhan vien: ", cin >> n;
	for (int i = 0; i < n; i++)
	{
		NhanVien* nv;
		int loai;
		cout << "CHON: Nhan Vien Quan Ly: 1; Nhan Vien San Xuat: 2; Nhan Vien Van Phong: 3: ";
		cin >> loai;
		if (loai == 1)
			nv = new NhanVienQuanLy();
		else if (loai == 2)
			nv = new NhanVienSanXuat();

		else if (loai == 3)
			nv = new NhanVienVanPhong();
		else
		{
			cout << " sai cu phap, thoat chuong trinh";
			break;
		}

		nv->Nhap();
		dsNhanVien.push_back(nv);
	}
}
void CongTy::Xuat()
{
	cout << "=====================thong tin nhan vien========================" << endl;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		dsNhanVien[i]->Xuat();
	}
}
int CongTy::tongLuongPhaiTra()
{
	float sum = 0;
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		sum += dsNhanVien[i]->Luong();
	}
	return sum;
}

void CongTy::timTen()
{
	string name;
	cout << "Nhap ten ban muon tim (phai viet dung chu hoa, chu thuong): ";
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (name == dsNhanVien[i]->getName())
		{
			cout << name << " la nhan vien cua cong ty" << endl;
			cout << " Thong tin:\n "; 
			dsNhanVien[i]->Xuat();
		}

	}

}

CongTy* CongTy::getInstance()
{
	if (Instance == NULL)
	{
		Instance = new CongTy;
	}
	return Instance;
}
CongTy::CongTy()
{
	CongTy::Nhap();
}