#include"TaiKhoanTietKiem.h"
//#include"TaiKhoan.h"
int main()
{
	TaiKhoanTietKiem t1;
	t1.Nhap();
	t1.Xuat();
	t1.rutTien(100);
	t1.soThangGuiThem(5);
	cout << "\ntong du: " << t1.tongDu();
	return 0;
}