#include <iostream>
using namespace std;

class Fraction
{
private:
	int Num;     //numerator
	int Deno;   //denominator
public:
	void KhoiTao()
	{
		Num = 0;
		Deno = 1;
	}
	void Input();
	void Output();
	int LayTu();
	int LayMau();
	void GanTu(int n);
	void GanMau(int n);
	void NghichDao();
	void RutGon();
	void QuyDong(Fraction& p2);
	Fraction Tong(Fraction p2);
	Fraction Hieu(Fraction p2);
	Fraction Tich(Fraction p2);
	Fraction Thuong(Fraction p2);


};
