#include "Diem2D.h"

void Diem2D::Xuat()
{
	cout << "(" << x << ", " << y << ")" << endl;
}
void Diem2D::DiChuyen(float x, float y)
{
	this->x = x;    //this -> x là hoành dộ điểm đó để lưu tr74 giá trị(nằm trong private) = _x
												// x là tham số mình truyền vào 
	this->y = y;
}

