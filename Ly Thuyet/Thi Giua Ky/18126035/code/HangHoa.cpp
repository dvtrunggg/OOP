//Dinh Viet Trung - 18126035
#include "HangHoa.h"
HangHoa::HangHoa()
{
	MaBuuPham = " none ";
	DiaChi = " none ";;
	NguoiNhan = " none ";;
	TrongLuong = 0;
}
HangHoa::HangHoa(string m, string d, string nhan, float t)
{
	MaBuuPham = m;
	DiaChi = d;
	NguoiNhan = nhan;
	TrongLuong = t;
}
HangHoa::HangHoa(const HangHoa& h)
{
	MaBuuPham = h.MaBuuPham;
	DiaChi = h.DiaChi;
	NguoiNhan = h.NguoiNhan;
	TrongLuong = h.TrongLuong;
}
HangHoa::~HangHoa()
{
	//da huy
}
void HangHoa::Nhap()
{
	cout << "Nhap Hang Hoa:" << endl;
	cout << " Ma Buu Pham: ";
	fflush(stdin);
	getline(cin, MaBuuPham);
	cout << "Dia Chi: ";
	fflush(stdin);
	getline(cin, DiaChi);
	cout << "Nguoi Nhan: ";
	fflush(stdin);
	getline(cin, NguoiNhan);
	cout << "Trong Luong: ";
	cin >> TrongLuong;
}
void HangHoa::Xuat()
{
	cout << "============================" << endl;
	cout << " Ma Buu Pham: "<<MaBuuPham<<endl;
	cout << "Dia Chi: "<<DiaChi<<endl;
	cout << "Nguoi Nhan: "<<NguoiNhan<<endl;
	cout << "Trong Luong: "<<TrongLuong<<endl;
}
int HangHoa::PhiVanChuyen()
{
	return 10000 * TrongLuong;
}
