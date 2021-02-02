#include"HinhChuNhat.h"
#include"Hinh.h"
#include<vector>
#include"HinhLapPhuongp"
int main()
{
	/*HinhChuNhat hcn(2, 3);
	cout << hcn;*/
	vector<Hinh*> ds;
	ds.push_back(new HinhChuNhat(1.2, 3.4));
	for (int i = 0; i < ds.size(); i++)
	{
		cout << *ds[i];
	}
	return 0;
}