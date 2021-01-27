#include "Fraction.h"

void Fraction::Print()
{
	cout << this->num << "/" << this->deno << endl;
}
Fraction::Fraction() // khởi tạo giá trị ban đầu 
{
	this->num = 0;
	this->deno = 1;
}
Fraction::Fraction(const Fraction& ps) // lấy tử và mẫu của ps gán cho thuộc tính của class ( num và deno)
{
	this->num = ps.num;
	this->deno = ps.deno;
}
Fraction::Fraction(const int tu, const int mau)
{
	this->num = num;
	this->deno = deno;
}
Fraction::Fraction(const int tu)
{
	this->num = tu;
	this->deno = 1; // ko lấy mẫu thì cho giá trị giống như hàm constructor default 
}

Fraction::~Fraction()
{
	//đã hủy tự động r nha:))
	cout << "da huy" << this << endl;
}
int main()
{
	Fraction ps1;
	ps1.Print();
	Fraction ps3(ps1); // constructor copy
	ps3.Print();
	Fraction ps2(10, 30);
	ps2.Print();
	return 0;
}