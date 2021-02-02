#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include"CDate.h"

using namespace std;

class SoTietKiemKKH
{
private:
	string CMND;
	string hoTen;
	double soTien;
	CDate ngayNhap;
	float laiSuat;
public:
	SoTietKiemKKH();
	SoTietKiemKKH(string cmnd, string hoTen, double soTien, CDate ngayNhap, float laiSuat);
	SoTietKiemKKH(const SoTietKiemKKH& stk);
	~SoTietKiemKKH();
	friend ostream& operator<<(ostream& os, const SoTietKiemKKH& stk);
	friend istream& operator>>(istream& is, SoTietKiemKKH& stk);
	double soTienLai();
};

class SoTietKiemCKH
{
private:
	string CMND;
	string hoTen;
	double soTien;
	CDate ngayNhap;
	float laiSuat;
	int kiHan;
public:
	SoTietKiemCKH();
	SoTietKiemCKH(string cmnd, string hoTen, double soTien, CDate ngayNhap, float laiSuat, int kiHan);
	SoTietKiemCKH(const SoTietKiemCKH& stk);
	~SoTietKiemCKH();
	friend ostream& operator<<(ostream& os, const SoTietKiemCKH& stk);
	friend istream& operator>>(istream& is, SoTietKiemCKH& stk);
	double soTienLai();
};
