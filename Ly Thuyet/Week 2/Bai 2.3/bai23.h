#include <iostream>
using namespace std;

class DonThuc
{
	float HeSo;
	float Bac;
public:
	void KhoiTao()
	{
		HeSo = Bac = 0;
	}
	void Input();
	void Output();
	float LayHeSo();
	float LayMu();
	void GanHeSo(float a);
	void GanBac(float a);
	float TinhGiaTriDonThuc(int x);
	DonThuc DaoHam();
	DonThuc NguyenHam();
	DonThuc Tong(DonThuc b);
	DonThuc Hieu(DonThuc b);
	DonThuc Tich(DonThuc b);
	DonThuc Thuong(DonThuc b);


}; 
