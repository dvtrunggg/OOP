#pragma once
#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
class CDate
{
private:
	int ngay, thang, nam;
public:
	CDate();
	CDate(int ng, int t, int n);
	CDate(const CDate& time);
	void NhapDate();
	void XuatDate();
	int TongNgay(int t);
	int KhoangCach(CDate date1, CDate date2);
};

