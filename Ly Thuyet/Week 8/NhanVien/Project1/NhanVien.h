#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class NhanVien
{
protected:
	string Ten;
	int luongCoBan;
	int namVaoLam;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int Luong() = 0;
	virtual string getName();
};

