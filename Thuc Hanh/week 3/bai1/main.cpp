#include"HocSinh.h"
int main()
{
	HocSinh hs1;
	hs1.DatHoTen("Nguyen Van A");
	hs1.GanDiem(7, 8, 10);
	HocSinh hs2("Tran Thi B", 5, 8, 4.5);
	HocSinh hs3("Hoang Thi C", -9.5, 8.5, 4.5);
	HocSinh hs4("Tran Thi B", 7.5, 9, 10);
	hs1.Xuat();
	cout << endl;
	hs2.Xuat();
	cout << endl;
	hs3.Xuat();
	cout << endl;
	hs4.Xuat();
	cout << "Hoc sinh co diem TB cao nhat: " << endl;
	HocSinh::HSDiemTBCaoNhat().Xuat();
	return 0;
}