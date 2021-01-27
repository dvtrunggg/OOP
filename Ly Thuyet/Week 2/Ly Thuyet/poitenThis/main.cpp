#include"Dtron.h"

int main()
{
	Diem2D O;
	O.KhoiTao();
	O.Xuat();
	cout << O.LayHoanhDo();
	O.DiChuyen(5, 3);
	O.Xuat();
	cout << O.LayHoanhDo();
	cout << "gan x:";
	O.GanHoanhDo(10);
	O.Xuat();


}
