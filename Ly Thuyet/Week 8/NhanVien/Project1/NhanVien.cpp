#include "NhanVien.h"

void NhanVien::Nhap()
{
	cout << "Nhap ho ten:";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap nam vao lam: ";
	cin >> namVaoLam;
	cout << "Luong co ban: ";
	cin >> luongCoBan;
}
void NhanVien::Xuat()
{
	cout << "Ten: " << Ten << "Nam vao lam: " << namVaoLam<<"Muc luong co ban: "<<luongCoBan<<endl;
}
string NhanVien::getName()
{
	return this->Ten;
}