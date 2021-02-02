#include "CNganHang.h"

istream& operator>>(istream& is, CNganHang& nganHang)
{
	SoTietKiemCKH stk1;
	SoTietKiemKKH stk2;

	cout << "Nhap so luong so tiet kiem co ki han ban muon nhap: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		is >> stk1;
		nganHang.stkCoKiHan.push_back(stk1);
	}

	cout << "Nhap so luong so tiet kiem khong ki han ban muon nhap: ";
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		is >> stk2;
		nganHang.stkKhongKiHan.push_back(stk2);
	}

	return is;
}

ostream& operator<<(ostream& os, const CNganHang& nganHang)
{
	int size1 = nganHang.stkCoKiHan.size();
	int size2 = nganHang.stkKhongKiHan.size();
	cout << "Danh sach so tiet kiem co thoi han: " << endl;
	for (int i = 0; i < size1; i++)
	{
		os << nganHang.stkCoKiHan[i] << endl;
	}
	cout << "Danh sach so tiet kiem khong thoi han: " << endl;
	for (int i = 0; i < size2; i++)
	{
		os << nganHang.stkKhongKiHan[i] << endl;
	}
	return os;
}

double CNganHang::tongTienLai()
{
	int size1 = this->stkCoKiHan.size();
	int size2 = this->stkKhongKiHan.size();

	double lai = 0;
	for (int i = 0; i < size1; i++)
	{
		lai += this->stkCoKiHan[i].soTienLai();
	}
	for (int i = 0; i < size2; i++)
	{
		lai += this->stkKhongKiHan[i].soTienLai();
	}

	return lai;
}