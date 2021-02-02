#pragma once
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

class CDate
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void khoiTao();
	void nhap(int ngay, int thang, int nam);
	void nhap(CDate date);
	int layNgay();
	int layThang();
	int layNam();
	int khoangCach(CDate date);
};

