#include"SoKhongKyHan.h"
SoKhongKyHan::SoKhongKyHan()
{
	CMND = "0";
	Name = " ";
	tienGui = 0;
	laiSuat = 0;
	kyHan = 0;
	CDate ngayLap();
}
SoKhongKyHan::SoKhongKyHan(string c, string n, int gui, float lai, int k, CDate nglap)
{
	this->CMND = c;
	this->kyHan = k;
	this->laiSuat = lai;
	this->Name = n;
	this->tienGui = gui;
	this->ngayLap = nglap;
}
float SoKhongKyHan::tienLai()
{
	// thoi gian hien tai
	time_t t;
	time(&t);
	tm now;
	localtime_s(&now, &t);


	CDate htai(now.tm_mday, now.tm_mon + 1, now.tm_year + 1900);	// khoi tao la thoi diem hien tai
	CDate temp;
	int n = temp.KhoangCach(ngayLap, htai) / 30;
	return tienGui * laiSuat * kyHan;
}