#include "QuanLyHinhHocPhang.h"
#include <fstream>

int main()
{
	ifstream fileIn;
	fileIn.open("hhp.txt", ios::beg);
	QuanLyHinhHocPhang ql;
	fileIn >> ql;
	//cout << ql << endl;
	//ql.xuatSoLuong();
	cout << "==================================" << endl;
	

	/*cout << "Tong dien tich hinh chu nhat: " << ql.tongDienTich_HCN() << endl;
	cout << "Tong chu vi hinh chu nhat: " << ql.tongChuVi_HCN() << endl;
	cout << "Tong dien tich hinh tron: " << ql.tongDienTich_HTron() << endl;
	cout << "Tong chu vi hinh tron: " << ql.tongChuVi_HTron() << endl;
	cout << "Tong dien tich hinh tam giac: " << ql.tongDienTich_TamGiac() << endl;
	cout << "Tong chu vi hinh tam giac: " << ql.tongChuVi_TamGiac() << endl;
	cout << "Tong dien tich hinh thang vuong: " << ql.tongDienTich_HThangVuong() << endl;
	cout << "Tong chu vi hinh thang vuong: " << ql.tongChuVi_HThangVuong() << endl;*/

	fileIn.close();
	return 0;
}