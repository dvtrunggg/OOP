#pragma once
#include "HinhChuNhat.h"
#include "HinhTron.h"
#include "HinhTamGiac.h"
#include "HinhThangVuong.h"
#include <vector>
class QuanLyHinhHocPhang
{
private:
	vector<HinhChuNhat> dsHinhChuNhat;
	vector<HinhTron> dsHinhTron;
	vector<HinhTamGiac> dsHinhTamGiac;
	vector<HinhThangVuong> dsHinhThangVuong;
public:
	friend ostream& operator<<(ostream& os, const QuanLyHinhHocPhang& qly);
	friend istream& operator>>(istream& is, QuanLyHinhHocPhang& qly);
	void xuatSoLuong();
	float tongDienTich_HCN();
	float tongChuVi_HCN();
	float tongDienTich_HTron();
	float tongChuVi_HTron();
	float tongDienTich_TamGiac();
	float tongChuVi_TamGiac();
	float tongDienTich_HThangVuong();
	float tongChuVi_HThangVuong();
};

float QuanLyHinhHocPhang::tongDienTich_HCN()
{
	float sum = 0;
	for (int i = 0; i < dsHinhChuNhat.size(); i++)
	{
		sum += dsHinhChuNhat[i].DienTich();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongChuVi_HCN()
{
	float sum = 0;
	for (int i = 0; i < dsHinhChuNhat.size(); i++)
	{
		sum += dsHinhChuNhat[i].ChuVi();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongDienTich_HTron()
{
	float sum = 0;
	for (int i = 0; i < dsHinhTron.size(); i++)
	{
		sum += dsHinhTron[i].DienTich();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongChuVi_HTron()
{
	float sum = 0;
	for (int i = 0; i < dsHinhTron.size(); i++)
	{
		sum += dsHinhTron[i].ChuVi();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongDienTich_TamGiac()
{
	float sum = 0;
	for (int i = 0; i < dsHinhTamGiac.size(); i++)
	{
		sum += dsHinhTamGiac[i].DienTich();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongChuVi_TamGiac()
{
	float sum = 0;
	for (int i = 0; i < dsHinhTamGiac.size(); i++)
	{
		sum += dsHinhTamGiac[i].ChuVi();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongDienTich_HThangVuong()
{
	float sum = 0;
	for (int i = 0; i < dsHinhThangVuong.size(); i++)
	{
		sum += dsHinhThangVuong[i].DienTich();
	}
	return sum;
}
float QuanLyHinhHocPhang::tongChuVi_HThangVuong()
{
	float sum = 0;
	for (int i = 0; i < dsHinhThangVuong.size(); i++)
	{
		sum += dsHinhThangVuong[i].ChuVi();
	}
	return sum;
}
ostream& operator<<(ostream& os, const QuanLyHinhHocPhang& qly)
{
	int i_hcn = 0, i_htr = 0, i_htg = 0, i_hthv = 0;
	while (i_hcn < qly.dsHinhChuNhat.size() || i_htr < qly.dsHinhTron.size() || i_htg < qly.dsHinhTamGiac.size() || i_hthv < qly.dsHinhThangVuong.size())
	{
		if (i_hcn < qly.dsHinhChuNhat.size())
		{
			os << "hcn: " << qly.dsHinhChuNhat[i_hcn] << endl;
			i_hcn++;
		}
		if (i_htr < qly.dsHinhTron.size())
		{
			os << "htr: " << qly.dsHinhTron[i_htr] << endl;
			i_htr++;
		}
		if (i_htg < qly.dsHinhTamGiac.size())
		{
			os << "htg: " << qly.dsHinhTamGiac[i_htg] << endl;
			i_htg++;
		}
		if (i_hthv < qly.dsHinhThangVuong.size())
		{
			os << "hthv: " << qly.dsHinhThangVuong[i_hthv] << endl;
			i_hthv++;
		}
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
		if (strcmp(buf, HinhChuNhat::getFlag()) == 0)
		{
			HinhChuNhat hcn;
			is >> hcn;
			qly.dsHinhChuNhat.push_back(hcn);
		}
		if (strcmp(buf, HinhTron::getFlag()) == 0)
		{
			HinhTron htr;
			is >> htr;
			qly.dsHinhTron.push_back(htr);
		}
		if (strcmp(buf, HinhTamGiac::getFlag()) == 0)
		{
			HinhTamGiac htg;
			is >> htg;
			qly.dsHinhTamGiac.push_back(htg);
		}
		if (strcmp(buf, HinhThangVuong::getFlag()) == 0)
		{
			HinhThangVuong hthv;
			is >> hthv;
			qly.dsHinhThangVuong.push_back(hthv);
		}
	}
	delete[] buf;
	return is;
}

void QuanLyHinhHocPhang::xuatSoLuong()
{
	cout << "=================================" << endl;
	cout << "So luong hinh chu nhat: " << dsHinhChuNhat.size() << endl;
	cout << "So luong hinh tron: " << dsHinhTron.size() << endl;
	cout << "So luong hinh tam giac: " << dsHinhTamGiac.size() << endl;
	cout << "So luong hinh thang vuong: " << dsHinhThangVuong.size() << endl;
}