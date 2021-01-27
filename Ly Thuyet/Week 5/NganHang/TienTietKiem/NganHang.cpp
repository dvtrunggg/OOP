#include "NganHang.h"
NganHang::NganHang()
{
	SoKhongKyHan a;
	koKyHan.push_back(a);
	SoKyHan b;
	kyHan.push_back(b);
}

float NganHang::TongTienLai()
{
	int sum = 0;
	for (int i = 0; i < koKyHan.size(); i++)
	{
		sum += koKyHan[i].tienLai();
	}
	for (int i = 0; i < kyHan.size(); i++)
	{
		sum += kyHan[i].tienLai();
	}
	return sum;
}
//istream& operator>>(istream& in, const NganHang& a)
//{
//	int n1, n2;
//	cout << "\nnhap so so tiet kiem co ky han: ";
//	in >> n1;
//	for (int i = 0; i < n1; i++)
//	{
//		in >> a.CKyHan[i];
//	}
//	cout << "\nnhap so so tiet kiem khong ky han: ";
//	in >> n2;
//	for (int i = 0; i < n2; i++)
//	{
//		in >> a.koKyHan[i];
//	}
//	return in;
//}

//ostream& operator<<(ostream& out, const NganHang& x)
//{
//	int a = x.TongTienLai();
//	out << "---------------- So Tiet Kiem Co Ky Han-------------------" << endl;
//	for (int i = 0; i < x.kyHan.size(); i++)
//	{
//		out << x.kyHan[i];
//	}
//	out << "---------------- So Tiet Kiem Khong Ky Han-------------------" << endl;
//	for (int i = 0; i < x.koKyHan.size(); i++)
//	{
//		out << x.koKyHan[i];
//	}
//	out << "Tong lai: " << a << endl;
//	return out;
//}