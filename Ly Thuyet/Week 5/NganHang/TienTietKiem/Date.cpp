#include "CDate.h"
CDate::CDate()
{
	ngay = 1;
	thang = 1;
	nam = 0;
}
CDate::CDate(int ng, int t, int n)
{
	this->ngay = ng;
	this->thang = t;
	this->nam = n;
}
CDate::CDate(const CDate& time)
{
	this->ngay = time.ngay;
	this->thang = time.thang;
	this->nam = time.nam;
}
void CDate::NhapDate()
{
	cout << "Nhap ngay: ", cin >> ngay;
	cout << "Nhap thang: ", cin >> thang;
	cout << "Nhap nam: ", cin >> nam;
}
void CDate::XuatDate()
{
	cout << ngay << ":" << thang << ":" << nam << endl;
}
int CDate::TongNgay(int t)	// t la thang
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
	// ko co thang 12 vi nhu the la het nam:)
}
// tinh khoang cach theo ngay
int CDate:: KhoangCach(CDate date1, CDate date2)
{
	int namNhuan1 = 0;
	int namNhuan2 = 0;
	for (int i = 0; i < date1.nam; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		{
			namNhuan1++;
		}
	}
	for (int i = 0; i < date2.nam; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		{
			namNhuan2++;
		}
	}
	int soNgay1 = 0;
	int soNgay2 = 0;
	soNgay1 = date1.nam * 365 + namNhuan1 + TongNgay(date1.thang);
	soNgay2 = date2.nam * 365 + namNhuan2 + TongNgay(date2.thang);
	return abs(soNgay1 - soNgay2);


}