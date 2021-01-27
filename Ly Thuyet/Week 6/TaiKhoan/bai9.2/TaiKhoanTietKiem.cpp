#include "TaiKhoanTietKiem.h"


void TaiKhoanTietKiem::Nhap()
{
	cout << "Nhap Tai Khoan Tiet Kiem:" << endl;
	cout << "Nhap Ky han: ", cin >> kyHan;
	cout << "Nhap lai suat: ", cin >> laiSuat;
	cout << "Nhap so thang gui: ", cin >> soThangGui;
	cout << "Nhap so tien du co san trong tai khoan:";
	TaiKhoan::Nhap();
}
void TaiKhoanTietKiem::Xuat()
{
	cout << "================================================" << endl;
	cout << "Lai Suat: " << laiSuat << endl;
	cout << "Ky Han (thang): " << kyHan << endl;
	cout << "So Thang Gui: " << soThangGui << endl;
	cout << "So du ban dau trong tai khoan:"; 
	TaiKhoan::Xuat();
}
void TaiKhoanTietKiem::napTien(float soTien)
{
	TaiKhoan::napTien(soTien);
	soThangGui = 0;
}
int TaiKhoanTietKiem::checkKyHan()
{
	if (soThangGui >= kyHan)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}
void TaiKhoanTietKiem::rutTien(float soTien)
{
	int check = TaiKhoanTietKiem::checkKyHan();
	if (check == 0 )
	{
		TaiKhoan::rutTien(soTien);
		cout << "\nso du con lai:" << TaiKhoan::baoSoDu()<<endl;
		if (soTien > TaiKhoan::baoSoDu())
		{
			cout << "so tien rut cao hon so tien trong tai khoan! " << endl;
			return;
		}
	}
	if (check == -1)
	{
		cout << "so tien rut cao hon so tien trong tai khoan! " << endl;
		return;
	}
}
int TaiKhoanTietKiem::soThangGuiThem(int soThang)
{
	cout << "\n ban gui them " << soThang << "\nso thang ban dau: " << soThangGui << "\nTong so thang: " << soThang + soThangGui << endl;
	soThangGui += soThang ;
	return soThangGui;
}
float TaiKhoanTietKiem::tongDu()
{
	int soDuBanDau = TaiKhoan::baoSoDu();
	int check = TaiKhoanTietKiem::checkKyHan();
	int tien;
	if (check == 0)
	{
		int n = (soThangGui / kyHan) * kyHan;	// vd: gửi 5 tháng, kỳ hạn 3 tháng => lãi dc tính theo kỳ hạn: 5/3 = 1 ; 1*3 tháng (= 1kỳ hạn)
		tien = soDuBanDau + (soDuBanDau * n * laiSuat);
	}
	if (check == -1)
	{
		tien = soDuBanDau;
	}
	return tien;
}

