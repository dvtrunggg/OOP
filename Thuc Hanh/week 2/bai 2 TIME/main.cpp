#include"Time.h"
int main()
{
	ThoiGian tg1;
	tg1.Xuat();
	ThoiGian tg2(1212);
	tg2.Xuat();
	ThoiGian tg3(125, 45);
	tg3.Xuat();
	ThoiGian tg4(12, 239, -78);
	tg4.Xuat();
	system("pause");
	return 0;
}
