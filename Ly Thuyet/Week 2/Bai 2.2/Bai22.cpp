#include "Bai22.h"

void CNumber::Input()
{
	cout << "Nhap phan thuc: ";
	cin >> PhanThuc;
	cout << "Nhap phan ao: ";
	cin >> PhanAo;
}

void  CNumber::Output()
{
	cout << "\nso phuc co dang: " << PhanThuc << "+" << PhanAo << "i" << endl;
}

float CNumber::LayPhanThuc()
{
	return PhanThuc;
}

float CNumber::LayPhanAo()
{
	return PhanAo;
}

void CNumber::GanPhanThuc(float a)
{
	PhanThuc = a;
}

void CNumber::GanPhanAo(float a)
{
	PhanAo = a;
}

float  CNumber::TinhModule()
{
	return sqrt(PhanThuc * PhanThuc + PhanAo * PhanAo);
}

CNumber  CNumber::Tong(CNumber b)
{
	CNumber c;
	c.PhanThuc = PhanThuc + b.PhanThuc;
	c.PhanAo = PhanAo + b.PhanAo;
	return c;
}

CNumber  CNumber::Hieu(CNumber b)
{
	CNumber c;
	c.PhanThuc = PhanThuc - b.PhanThuc;
	c.PhanAo = PhanAo - b.PhanAo;
	return c;
}

CNumber  CNumber::Tich(CNumber b)
{
	CNumber c;
	c.PhanThuc = PhanThuc * b.PhanThuc - PhanAo * b.PhanAo;
	c.PhanAo = PhanThuc * b.PhanAo + b.PhanThuc * PhanAo;
	return c;
}

CNumber  CNumber::Thuong(CNumber b)
{
	CNumber c;
	c.PhanThuc = (PhanThuc * b.PhanThuc + PhanAo * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	c.PhanAo = (b.PhanThuc * PhanAo - PhanThuc * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	return c;
}