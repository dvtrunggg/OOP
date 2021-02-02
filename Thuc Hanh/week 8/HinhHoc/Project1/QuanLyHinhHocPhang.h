#pragma once
#include "HinhChuNhat.h"
#include "HinhTron.h"
#include "HinhTamGiac.h"
#include "HinhThangVuong.h"
#include"HinhHocPhang.h"
#include <vector>
class QuanLyHinhHocPhang
{
private:
		vector<HinhHocPhang*> dsHinh;
public:
	friend ostream& operator<<(ostream& os, const QuanLyHinhHocPhang& qly);
	friend istream& operator>>(istream& is, QuanLyHinhHocPhang& qly);
	~QuanLyHinhHocPhang();
	void xuatSoLuong();
	double tongDienTich_HCN();
	double tongChuVi_HCN();
	double tongDienTich_HTron();
	double tongChuVi_HTron();
	double tongDienTich_TamGiac();
	double tongChuVi_TamGiac();
	double tongDienTich_HThangVuong();
	double tongChuVi_HThangVuong();
};

//QuanLyHinhHocPhang::~QuanLyHinhHocPhang()
//{
//	for (int i = 0; i < dsHinh.size(); i++)
//	{
//		delete dsHinh[i];
//	}
//}
//double QuanLyHinhHocPhang::tongDienTich_HCN()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhChuNhat.size(); i++)
//	{
//		sum += dsHinhChuNhat[i].DienTich();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongChuVi_HCN()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhChuNhat.size(); i++)
//	{
//		sum += dsHinhChuNhat[i].ChuVi();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongDienTich_HTron()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhTron.size(); i++)
//	{
//		sum += dsHinhTron[i].DienTich();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongChuVi_HTron()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhTron.size(); i++)
//	{
//		sum += dsHinhTron[i].ChuVi();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongDienTich_TamGiac()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhTamGiac.size(); i++)
//	{
//		sum += dsHinhTamGiac[i].DienTich();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongChuVi_TamGiac()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhTamGiac.size(); i++)
//	{
//		sum += dsHinhTamGiac[i].ChuVi();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongDienTich_HThangVuong()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhThangVuong.size(); i++)
//	{
//		sum += dsHinhThangVuong[i].DienTich();
//	}
//	return sum;
//}
//double QuanLyHinhHocPhang::tongChuVi_HThangVuong()
//{
//	double sum = 0;
//	for (int i = 0; i < dsHinhThangVuong.size(); i++)
//	{
//		sum += dsHinhThangVuong[i].ChuVi();
//	}
//	return sum;
//}
ostream& operator<<(ostream& os, const QuanLyHinhHocPhang& qly)
{
	for (int i = 0; i < qly.dsHinh.size(); i++)
	{
		os << *qly.dsHinh[i] << endl;
	}
	return os;
}

istream& operator>>(istream& is, QuanLyHinhHocPhang& qly)
{
	char* buf = new char[MAX];

	while (!is.eof())
	{
		is.get(buf, MAX, ':');
		is.ignore(2);
		HinhHocPhang* temp = NULL;
		if (strcmp(buf, HinhChuNhat::getFlag()) == 0)
		{
			temp = new HinhChuNhat;
		}
		if (strcmp(buf, HinhTron::getFlag()) == 0)
		{
			temp = new HinhTron;
		}
		if (strcmp(buf, HinhTamGiac::getFlag()) == 0)
		{
			temp = new HinhTamGiac;
		}
		if (strcmp(buf, HinhThangVuong::getFlag()) == 0)
		{
			temp = new HinhThangVuong;
		}
		if (temp != NULL)
		{
			is >> *temp;
			qly.dsHinh.push_back(temp);
		}
	}
	delete[] buf;
	return is;
}

//void QuanLyHinhHocPhang::xuatSoLuong()
//{
//	cout << "=================================" << endl;
//	cout << "So luong hinh chu nhat: " << dsHinhChuNhat.size() << endl;
//	cout << "So luong hinh tron: " << dsHinhTron.size() << endl;
//	cout << "So luong hinh tam giac: " << dsHinhTamGiac.size() << endl;
//	cout << "So luong hinh thang vuong: " << dsHinhThangVuong.size() << endl;
//}