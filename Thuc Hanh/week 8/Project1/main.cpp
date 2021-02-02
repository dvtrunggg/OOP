#include"CongTy.h"
#include<string>
#include<fstream>

int main()
{
	ifstream fIn;
	fIn.open("input.txt", ios::beg);
	CongTy cty;
	fIn >> cty;
	cout << cty;
	fIn.close();

	cout << "Danh sach Nhan Vien xuat sac:" << endl;
	cty.NhanVienXuatSac();
	cty.ThemNhanVienMoi();

	
	return 0;
}