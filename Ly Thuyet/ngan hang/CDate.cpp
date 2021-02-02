#include"CDate.h"

void CDate::khoiTao()
{
	ngay = 1;
	thang = 1;
	nam = 0;
}

void CDate::nhap(int ngay, int thang, int nam)
{
	this->ngay = ngay;
	this->thang = thang;
	this->nam = nam;
}

void CDate::nhap(CDate date)
{
	this->ngay = date.ngay;
	this->thang = date.thang;
	this->nam = date.nam;
}

int CDate::layNgay()
{
	return ngay;
}

int CDate::layThang()
{
	return thang;
}

int CDate::layNam()
{
	return nam;
}

int tongNgayTinhDenThang(int thang)
{
	if (thang == 1)
		return 0;
	else if (thang == 2)
		return 31;
	else if (thang == 3)
		return 59;
	else if (thang == 4)
		return 90;
	else if (thang == 5)
		return 120;
	else if (thang == 6)
		return 151;
	else if (thang == 7)
		return 181;
	else if (thang == 8)
		return 212;
	else if (thang == 9)
		return 243;
	else if (thang == 10)
		return 273;
	else if (thang == 11)
		return 304;
	else
		return 334;
}

int CDate::khoangCach(CDate date)
{
	CDate date1;
	date1.nhap(ngay, thang, nam);

	int soNgayD1, soNgayD2, soNamNhuanD1 = 0, soNamNhuanD2 = 0;

	for (int i = 0; i < date1.nam; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
			soNamNhuanD1++;
	}

	for (int i = 0; i < date.nam; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
			soNamNhuanD2++;
	}

	soNgayD1 = date1.nam * 365 + soNamNhuanD1 + date1.ngay + tongNgayTinhDenThang(date1.thang);
	soNgayD2 = date.nam * 365 + soNamNhuanD2 + date.ngay + tongNgayTinhDenThang(date.thang);

	return abs(soNgayD1 - soNgayD2);
}
