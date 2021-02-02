#include "GiaoVien.h"

istream& operator >> (istream& is, GiaoVien& gv)
{
	cout << "Nhap ma: ";
	is >> gv.ma;
	cout << "Nhap ho ten: ";
	is >> gv.hoTen;
	cout << "Nhap dia chi: ";
	is>>gv.diaChi;
	cout << "Nhap so dien thoai: ";
	is >> gv.soDienThoai;
	

	cout << "Ban la gia vien CLC? (1: CLC, 0: ko phai): ";
	is >> gv.laGiaoVienCLC;

	int n;
	cout << "Nhap so mon ban co the day: ", is >> n;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cout << "Ten mon hoc:";
		is >> temp;
		gv.danhSachMonCoTheDay.push_back(temp);
	}
	return is;
}
ostream& operator << (ostream& os, const GiaoVien& gv)
{
	os << "Ten: " << gv.hoTen << "dia chi: " << gv.diaChi << "SDT: " << gv.soDienThoai << endl;
	if (gv.laGiaoVienCLC == 1)
		os << "la GV clc" << endl;
	if (gv.laGiaoVienCLC == 0)
		os << "la GV thuong" << endl;
	os << "Danh sach mon co the day: ";
	for (int i = 0; i < gv.danhSachMonCoTheDay.size(); i++)
	{
		os << gv.danhSachMonCoTheDay[i]<<"\t";
	}
	return os;
}
int main()
{
	GiaoVien gv;
	cin >> gv;
	cout << gv;
	return 0;
}