#pragma once
#include<iostream>
#include <iomanip>
#include<string>
#include"vector"
using namespace std;
class ChiTietMay
{
protected:
	string ID;
public:
	virtual double TinhGiaThanh() = 0;
	virtual double TinhTrongLuong() = 0;
	virtual void Xuat(ostream& os) = 0;
};

