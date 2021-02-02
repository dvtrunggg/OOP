//
// SID: … 18126035…
// Name: … Dinh Viet Trung…
// Created at May 28th, 2020
//
#include "C18126035_LuongThucTP.h"
void C18126035_LuongThucTP::Nhap()
{
	C18126035_Sap::Nhap();
	cout << "Nhap tong doanh thu: ";
	cin >> this->tongDoanhThu;
}
double C18126035_LuongThucTP::tongTien()
{
	double thueDoanhThu;
	double tienThueSap;
	tienThueSap = C18126035_Sap::donGiaThue() * dienTich;
	thueDoanhThu = tongDoanhThu * 0.05;
	return thueDoanhThu + tienThueSap;
}