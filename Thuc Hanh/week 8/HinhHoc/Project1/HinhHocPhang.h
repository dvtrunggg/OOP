#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define MAX 100
#define pi 3.14

class HinhHocPhang
{
public:
	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	friend ostream& operator<<(ostream& os, HinhHocPhang h);
	friend istream& operator>>(istream& is, HinhHocPhang& h);

	
};
void HinhHocPhang::Nhap(istream& is)
{

}
void HinhHocPhang::Xuat(ostream& os)
{

}
ostream& operator<<(ostream& os, HinhHocPhang h)
{
	h.Xuat(os);
	return os;

}
istream& operator>>(istream& is, HinhHocPhang& h)
{
	h.Nhap(is);
	return is;
}

