#pragma once
#include<iostream>
#include<string>
using namespace std;
class GiaoVien
{
private:
	string Ten;
	int soTiet;
	int phuCap;
public:
	GiaoVien();
	GiaoVien(int, int);
	GiaoVien(string, int, int);
	~GiaoVien()
	{
	}
	int Luong();
	bool operator >(GiaoVien&);
	bool operator ==(GiaoVien&);


};

