#include"CongTy.h"

int main()
{

	/*CongTy cty;
	cty.Nhap();
	cty.Xuat();
	cout << "\nTong tien luong cong ty phai tra cho nhan vien:" << cty.tongLuongPhaiTra()<<endl;
	cty.timTen();*/

	CongTy* cty = CongTy::getInstance();
	//cty->Nhap();
	cty->Xuat();
	/*cout << "\nTong tien luong cong ty phai tra cho nhan vien:" << cty->tongLuongPhaiTra() << endl;
	cty->timTen();*/
	cout << " ===========================" << endl;
	CongTy* cty2 = CongTy::getInstance();
	cty2->Xuat();
	return 0;
}