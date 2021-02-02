//Dinh Viet Trung - 18126035
#include "Thu.h"

Thu::Thu()
{
	maThu = " none ";
	diaChi = " none ";;
	nguoiNhan = " none ";
	loaiThu = 0;
}
Thu::Thu(string ma, string d, string nhan, int loai)
{
	maThu = ma;
	diaChi = d;
	nguoiNhan = nhan;
	loaiThu = loai;
}
Thu::Thu(const Thu& bp)
{
	maThu = bp.maThu;
	diaChi = bp.diaChi;
	nguoiNhan = bp.nguoiNhan;
	loaiThu = bp.loaiThu;
}
Thu::~Thu()
{
	//da huy
}
void Thu::Nhap()
{
	cout << " Buu Pham:" << endl;
	cout << "\tMa Buu Pham: "; 
	fflush(stdin);
	getline(cin, maThu);
	cout << "\tDia Chi: ";
	fflush(stdin);
	getline(cin, diaChi);
	cout << "\tNguoi Nhan:";
	fflush(stdin);
	getline(cin, nguoiNhan);
	cout << "\t Loai Thu (-1 la thuong, 1 la nhanh): ";
	cin >> loaiThu;
}
void Thu::Xuat()
{
	cout << " Buu Pham:" << endl;
	cout << "\tMa Buu Pham: " << maThu<<endl;
	cout << "\tDia Chi: " << diaChi<<endl;
	cout << "\tNguoi Nhan:" << nguoiNhan << endl;
	cout << "\t Loai Thu (-1 la thuong, 1 la nhanh): " << loaiThu << endl;
}
int Thu::phiVanChuyen()
{
	if (loaiThu == -1)
		return 5000;
	if (loaiThu == 1)
		return 10000;
	else
		return NULL;
}
