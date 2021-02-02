//
// SID: … 18126035…
// Name: … Dinh Viet Trung…
// Created at May 28th, 2020
//
#include "C18126035_DoGiaDung.h"


void C18126035_DoGiaDung::Nhap()
{
	C18126035_Sap::Nhap();
	cout << "Nhap tong doanh thu: ";
	cin >> tongDoanhThu;
}
double C18126035_DoGiaDung::tongTien()
{
	double thueDoanhThu;
	double tienThueSap;
	tienThueSap = C18126035_Sap::donGiaThue() * dienTich;
	
	if (tongDoanhThu < 5000)
		thueDoanhThu = tongDoanhThu * 0.2;
	if (tongDoanhThu >= 5000)
		thueDoanhThu = tongDoanhThu * 0.3;
	
	return thueDoanhThu + tienThueSap;
}