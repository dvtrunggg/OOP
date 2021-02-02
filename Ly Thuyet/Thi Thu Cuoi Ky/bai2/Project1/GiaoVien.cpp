#include "GiaoVien.h"

GiaoVien::GiaoVien()
{
	Ten = " ";
	phuCap = 0;
	soTiet = 0;
}
GiaoVien::GiaoVien(string t, int st, int pc)
{
	Ten = t;
	phuCap = pc;
	soTiet = st;
}
GiaoVien::GiaoVien(int st, int pc)
{
	phuCap = pc;
	soTiet = st;
}
int GiaoVien::Luong()
{
	return soTiet * 50000 + phuCap;
}
bool GiaoVien::operator >(GiaoVien& gv)
{
	int l = Luong();
	if (l > gv.Luong())
		return true;
	return false;
}

bool GiaoVien::operator ==(GiaoVien& gv)
{
	int l = Luong();
	if (l == gv.Luong())
		return true;
	return false;
}

