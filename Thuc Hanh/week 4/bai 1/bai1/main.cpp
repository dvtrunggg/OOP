#include"Ngay.h"

int main()
{
	Ngay n1;
	Ngay n2(2, 10, 2014);
	Ngay n3(-10, 16, 2000);
	Ngay n4(1000);
	Ngay n5 = n2 + n3;
	Ngay n6 = n1 + 5000;
	Ngay n7 = 1234 + n4;
	Ngay n8 = 190 + n6 + n7;
	Ngay n9 = n8 - n6;
	Ngay n10 = 12000 - n9;
	if (n10 > n6)
		n10 = n2 - 1000 + n6;
	cout << n1 << endl << n2 << endl << n3 << endl;
	cout << n4 << endl << n5 << endl << n6 << endl;
	cout << n7 << endl << n8 << endl << n9 << endl << n10 << endl;
	return 0;
}