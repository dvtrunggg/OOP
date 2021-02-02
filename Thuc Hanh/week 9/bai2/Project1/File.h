#pragma once
#include"Data.h"

class File : public Data
{
	double KichThuoc;
public:
	File(string Ten, double KichThuoc)
	{
		this->Ten = Ten;
		this->KichThuoc = KichThuoc;
	}

	void Xuat()
	{
		cout << this->Ten << "   " << this->KichThuoc << " B";
	}

	double getSize()
	{
		return this->KichThuoc;
	}
};