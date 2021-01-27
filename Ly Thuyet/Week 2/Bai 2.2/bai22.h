#include <iostream>
using namespace std;

class CNumber    // complex numbers
{
	float PhanThuc;
	float PhanAo;
public:
	void KhoiTao()
	{
		float PhanThuc = 0;
		float PhanAo = 0;
	}
	void Input();
	void Output();
	float LayPhanThuc();
	float LayPhanAo();
	void GanPhanThuc(float a);
	void GanPhanAo(float a);
	float TinhModule();
	CNumber Tong(CNumber b);
	CNumber Hieu(CNumber b);
	CNumber Tich(CNumber b);
	CNumber Thuong(CNumber b);
}; 
