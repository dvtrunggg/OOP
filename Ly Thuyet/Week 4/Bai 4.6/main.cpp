#include"bai46.h"

int main()
{
	HocSinh hs1("Nguyen Van A",10,8);
	HocSinh hs2("Tran Van B", 6, 5);
	if (hs1 >= hs2)
		cout << hs1;
	else
		cout << hs2;


	return 0;
}
