#include<iostream>
using namespace std;
class Diem2D
{
	float x, y;
public:
	void KhoiTao() {
		x = 0;
		y = 0;
	}
	void Xuat();
	void DiChuyen(float x, float y);
	// hàm getter
	float LayHoanhDo()
	{
		return x;
	}
	float LayTungDo()
	{
		return y;
	}

	// hàm setter
	void GanHoanhDo(int x)
	{
		this->x = x;
	}
};


