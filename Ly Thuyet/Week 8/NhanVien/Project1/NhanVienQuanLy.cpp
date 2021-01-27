#include "NhanVienQuanLy.h"

void NhanVienQuanLy::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap he so luong: ";
	cin >> heSo;
	cout << "Thuong: ";
	cin >> Thuong;
	cout << "-------------------------------" << endl;

}
void NhanVienQuanLy::Xuat()
{
	NhanVien::Xuat();
	cout << "He so luong: " << heSo << endl;
	cout << "tien thuong: " << Thuong<<endl;
}
int NhanVienQuanLy::Luong()
{
	return luongCoBan * heSo + Thuong;
}
