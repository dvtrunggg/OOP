#include"GiaoVien.h"

int main()
{
	GiaoVien gv1;
	GiaoVien gv2(100, 600000);
	GiaoVien gv3("Thanh Thanh", 1000, 700000);
	if (gv2 > gv3)
	{
		cout << "Gv2 co luong nhieu hon gv3" << endl;
	}
	else if (gv2 == gv3)
	{
		cout << "Gv2 co luong bang hon gv3" << endl;
	}
	else
		cout << "Gv2 co luong thap hon gv3" << endl;
	return 0;
}