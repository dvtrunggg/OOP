#include"Ngay.h"

int main()
{
	Ngay n1;
	n1.Output();
	Ngay n2(2, 10, 2014);
	n2.Output();
	Ngay n3(-10, 16, 2000);
	n3.Output();
	Ngay n4(1000);
	n4.Output();
	return 0;
}