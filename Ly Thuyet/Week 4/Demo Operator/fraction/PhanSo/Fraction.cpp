#include "Fraction.h"

int Fraction::sl = 0;

Fraction::Fraction()
{
	Num = 0;
	Deno = 1;
	Fraction::sl++;
}
Fraction::Fraction(int tu, int mau)
{
	this->Num = tu;
	this->Deno = mau;
	Fraction::sl+=1;
}
Fraction::Fraction(Fraction const& ps)
{
	this->Num = ps.Num;
	this->Deno = ps.Deno;
	Fraction::sl++;
}

// operator use in class: toàn tử dùng trong lớp ( => ko dùng frend)

Fraction Fraction :: operator+(const Fraction& ps)
{
	Fraction psResult;   // ps kết quả
	// result = ps1 + ps2 => quy đồng mãu:
	psResult.Num = Num * ps.Deno + ps.Num * Deno;
	psResult.Deno = Deno * ps.Deno;
	return psResult;
}
Fraction Fraction :: operator - (const Fraction& ps)
{
	Fraction psResult;
	psResult.Num = Num * ps.Deno - ps.Num * Deno;
	psResult.Deno = Deno * ps.Deno;
	return psResult;
}
Fraction Fraction :: operator * (const Fraction& ps)
{
	Fraction psResult;
	psResult.Num = Num * ps.Num;
	psResult.Deno = Deno * ps.Deno;
	return psResult;
}
Fraction Fraction :: operator / (const Fraction& ps)
{
	Fraction psResult;
	psResult.Num = Num * ps.Deno;       // nhân nghịch đảo
	psResult.Deno = Deno * ps.Num;
	return psResult;
}
Fraction& Fraction :: operator = (const Fraction& rps)
{
	//if (this == rps)   // ko có dòng if này vẫn ok
	//	return *this;
	this->Num = rps.Num;
	this->Deno = rps.Deno;
	return *this;
	// đối với họ tên, ko dc gán = (trừ string); mà khai báo (dùng char*) ( con trỏ): new, strcpy (thuộc tính con trỏ)
	//string: gán bth 
}
Fraction& Fraction:: operator += (const Fraction& ps)
{
	this->Num = this->Num * ps.Deno + this->Deno * ps.Num;
	this->Deno = this->Deno * Deno;
	return *this;
}
	//c2: dùng toán tử +: a+=b <=> a = a+b ( use frend)
Fraction &operator -=(Fraction& a, const Fraction& b)
{
	a = a - b;
	return a;
}
//bool Fraction :: operator>=( Fraction& ps)
//{
//	float ps1 = Num / Deno;       // phân số 1 ( dùng sẵn num và deno torng class) : float để lấy giá trị chính xác, ko lấy int.
//	float ps2 = ps.Num / ps.Deno;      // ps truyền vào trong toán tử 
//	if (ps1 >= ps2)
//		return true;
//	else 
//		return false;    
//}
//bool Fraction :: operator>( Fraction& ps)
//{
//	if (*this > ps)
//		return true;
//	return false;
//}

// a++ và ++a
Fraction Fraction::operator ++()    // ++a: cộng trước, xuất sau
{
	this->Num += this->Deno;       // num = num + deno
	return *this;			// return đối tượng mới 
}
Fraction Fraction::operator ++(int notUse)		//a++: cộng sau, xuất trc
{
	Fraction temp = *this;
	++(*this);
	return temp;
}

//ép kiểu:
// Fraction::operator float() const
//{
//	 return 1.0 * this->Num / this->Deno;   //1.0 để chuyển sang dạng số thập phân ( float)
//	// return (float)this->Num / this->Deno;    // cách 2
//}
 Fraction::operator int() const
 {
	 return 1* this->Num / this->Deno;
 }

ostream& operator <<(ostream &os, const Fraction& ps)
{
	os << ps.Num << "/" << ps.Deno;     // na ná hàm xuất bth, thay cout thành biến os
	return os;   // nhớ luôn có return nha.
}

istream& operator>>(istream& is, Fraction& ps)
{
	cout << "Enter Numerator:";
	is >> ps.Num;
	cout << "Enter Denominator";
	is >> ps.Deno;
	return is;
}