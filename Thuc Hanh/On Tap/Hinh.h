#pragma once
#include <iostream>
#include<string>
using namespace std;
class Hinh
{
protected:
	string tenHinh;
public:
	virtual double dienTich()
	{
		return 0;
	}
	virtual double chuVi()
	{
		return 0;
	}
	virtual double dienTichXQ() 
	{
		return 0;
	}
	virtual double theTich()
	{
		return 0;
	}
	virtual string getName() = 0;
	virtual void Xuat(ostream& os)
	{
		//os << this->tenHinh << " ";
		os <<getName() << endl;
		/*os << a.chuVi();
		os << a.dienTich();
		os << a.dienTichXQ();
		os << a.theTich();*/
		
		
	}
	friend ostream& operator<<(ostream& os, Hinh& h);

};
ostream& operator<<(ostream& os, Hinh& h)
{
	h.Xuat(os);
	return os;
}

