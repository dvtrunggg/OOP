//
// SID: … 18126035…
// Name: … Dinh Viet Trung…
// Created at May 28th, 2020
//
#include "C18126035_HoaMyPham.h"
void C18126035_HoaMyPham::Nhap()
{
	C18126035_Sap::Nhap();
	cout << "Nhap tong doanh thu: ";
	cin >> tongDoanhThu;
}
double C18126035_HoaMyPham::tongTien()
{
	double thueDoanhThu;
	double tienThueSap;
	tienThueSap = C18126035_Sap::donGiaThue() * dienTich;
	thueDoanhThu = tongDoanhThu * 0.1;
	return thueDoanhThu + tienThueSap;
}