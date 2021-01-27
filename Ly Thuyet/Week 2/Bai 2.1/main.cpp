#include"bai1.h"

int main()
{
	Fraction p1, p2, p3;
	int a, b;
	p1.Input();
	p1.Output();
	cout << " \tTu so ban muon gan: " << endl;
	cin >> a;
	cout << " \tMau so ban muon gan: " << endl;
	cin >> b;
	p1.GanTu(a);
	p1.GanMau(b);
	cout << "\nphan so sau khi ban gan la: ";
	p1.Output();
	cout << "\n\tnghich dao cua phan so p1 la: ";
	p1.NghichDao();
	p1.Output();
	cout << "\nrut gon cua phan so p1 la: ";
	p1.RutGon();
	p1.Output();
	cout << "\nnhap phan so p2: ";
	p2.Input();
	p2.Output();
	cout << "\n tong 2 phan so la: \n";
	p3 = p1.Tong(p2);
	p3.Output();
	cout << "\n hieu 2 phan so la: \n";
	p3 = p1.Hieu(p2);
	p3.Output();
	cout << "\n tich 2 phan so la: \n";
	p3 = p1.Tich(p2);
	p3.Output();
	cout << "\n thuong 2 phan so la: \n";
	p3 = p1.Thuong(p2);
	p3.Output();


	return 0;
}