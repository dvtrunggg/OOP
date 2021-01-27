#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong san pham: ";
	cin >> soSanPham;
	cout << "-------------------------------" << endl;
}
void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "so luong san pham: " << soSanPham<<endl;
}
int NhanVienSanXuat::Luong()
{
	return luongCoBan + soSanPham * 2000;
}
