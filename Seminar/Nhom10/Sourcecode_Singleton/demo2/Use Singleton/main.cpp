// dùng singleton 



#include "NhanVien.h"
int main()
{
	NhanVien* a, * b;
	a = NhanVien::getInstance();
	a->Xuat();
	b = NhanVien::getInstance();
	cout << "Dia chi cua a: " << a << endl;
	cout << " Dia chi cua b:" << b << endl;
	return 0;
}
