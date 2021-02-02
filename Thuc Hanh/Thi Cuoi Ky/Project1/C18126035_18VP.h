//
// SID: … 18126035…
// Name: … Dinh Viet Trung…
// Created at May 28th, 2020
//

#pragma once
#include<iostream>
#include<string>
using namespace std;
class C18126035_Sap
{
protected:
	int stt;
	double dienTich;
public:
	virtual void Nhap();
	virtual double tongTien() = 0;
	double donGiaThue();
};