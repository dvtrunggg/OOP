#include"bai22.h"

int main()
{
	CNumber a, b, c;
	a.Input();
	a.Output();
	cout << "module cua so phuc la: " << a.TinhModule() << endl;
	cout << "\nphan thuc cua so phuc la: " << a.LayPhanThuc();
	cout << "phan ao cua so phuc la: " << a.LayPhanAo();
	float a1, b1;
	cout << "\n\tNhap phan thuc ban muon gan: ";
	cin >> a1;
	cout << "\n\tNhap phan ao ban muon gan: ";
	cin >> b1;
	a.GanPhanThuc(a1);
	a.GanPhanAo(b1);
	a.Output();

	cout << "\nNhap so phuc thu 2: " << endl;
	b.Input();
	b.Output();
	cout << " Module cua so phuc la: " << b.TinhModule() << endl;

	cout << "\ntong 2 so phuc la: \n";
	c = a.Tong(b);
	c.Output();

	cout << "\nhieu 2 so phuc la: \n";
	c = a.Hieu(b);
	c.Output();;

	cout << "\ntich 2 so phuc la: \n";
	c = a.Tich(b);
	c.Output();

	cout << "\nthuong 2 so phuc la: \n";
	c = a.Thuong(b);
	c.Output();
	return 0;
}