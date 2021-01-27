#include "NhanVienVanPhong.h"

void NhanVienVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "so ngay lam viec: ";
	cin >> soNgayLamViec;
	cout << "Tro cap: ";
	cin >> troCap;
	cout << "-------------------------------" << endl;

}
void NhanVienVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "so ngay lam viec: " << soNgayLamViec<<endl;
	cout << "tro cap: " << troCap<<endl;
}
int NhanVienVanPhong::Luong()
{
	return luongCoBan + soNgayLamViec * 100000 + troCap;
}