#include"bai23.h"

int main()
{
	DonThuc a, b, c;
	int x;
	a.Input();
	a.Output();
	cout << "\ndon thuc co he so la: " << a.LayHeSo();
	cout << "\ndon thuc co bac la: " << a.LayMu();
	float a1, b1;
	cout << "\n\t he so can gan cua don thuc: ";
	cin >> a1;
	cout << "\n\t bac can gan cua don thuc: ";
	cin >> b1;
	a.GanHeSo(a1);
	a.GanBac(b1);
	a.Output();

	cout << "\n\t gia tri x: ";
	cin >> x;
	cout << "don thuc co gia tri : " << a.TinhGiaTriDonThuc(x) << endl;

	b = a.DaoHam();
	cout << "\ndao ham cua don thuc : \n";
	b.Output();

	b = a.NguyenHam();
	cout << "\nnguyen ham cua don thuc : \n";
	b.Output();

	b.Input();
	b.Output();
	cout << "\ntong 2 don thuc : \n";
	c = a.Tong(b);
	c.Output();

	cout << "\nhieu 2 don thuc : \n";
	c = a.Hieu(b);
	c.Output();

	cout << "\ntich 2 don thuc : \n";
	c = a.Tich(b);
	c.Output();

	cout << "\nthuong 2 don thuc : \n";
	c = a.Thuong(b);
	c.Output();
	system("pause");
	return 0;
}