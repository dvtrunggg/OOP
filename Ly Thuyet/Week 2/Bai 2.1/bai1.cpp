#include "bai1.h"

void Fraction::Input()
{
	cout << "nhap tu so: ";
	cin >> Num;
	cout << "nhap mau so: ";
	cin >> Deno;
}

void Fraction::Output()
{
	cout << Num << "/" << Deno << endl;
}

int Fraction::LayTu()
{
	return Num;
}

int Fraction::LayMau()
{
	return Deno;
}

void Fraction::GanTu(int n)
{
	this->Num = n;
}

void Fraction::GanMau(int n)
{
	this->Deno = n;
}


void Fraction::NghichDao()
{
	int t = Num;
	Num = Deno;
	Deno = t;
}

void Fraction::RutGon()
{
	int n = abs((abs(Num) <= abs(Deno)) ? Num : Deno);
	for (int i = 2; i <= n; i++)
	{
		while (Num % i == 0 && Deno % i == 0)
		{
			Num /= i;
			Deno /= i;
		}
	}
}

void Fraction::QuyDong(Fraction& p2)
{
	this->Num *= p2.Deno;
	p2.Num *= this->Deno;
	this->Deno = this->Deno * p2.Deno;
	p2.Deno = this->Deno;

}

Fraction Fraction::Tong(Fraction p2)
{
	Fraction p3;
	QuyDong(p2);
	p3.Num = this->Num + p2.Num;
	p3.Deno = this->Deno;
	p3.RutGon();
	return p3;
}

Fraction Fraction::Hieu(Fraction p2)
{
	Fraction p3;
	QuyDong(p2);
	p3.Num = this->Num - p2.Num;
	p3.Deno = this->Deno;
	p3.RutGon();
	return p3;
}

Fraction Fraction::Tich(Fraction p2)
{
	Fraction p3;
	p3.Num = this->Num * p2.Num;
	p3.Deno = this->Deno * p2.Deno;
	p3.RutGon();
	return p3;
}

Fraction Fraction::Thuong(Fraction p2)
{
	Fraction p3;
	p2.NghichDao();
	p3.Num = this->Num * p2.Num;
	p3.Deno = this->Deno * p2.Deno;
	p3.RutGon();
	return p3;
}