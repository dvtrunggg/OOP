#pragma once
#include"NhanVien.h"

class NhanVienKyThuat : public NhanVien
{
private:
	string chungChiNganh;
	int slSangKien;
public:
	friend ostream& operator <<(ostream& os,  NhanVienKyThuat nvkt);
	friend istream& operator >>(istream& is, NhanVienKyThuat& nvkt);
	static const char* getFlag();
	int checkXuatSac()
	{
		if (this->slSangKien >= 6)
			return 1;
		return 0;
	}
	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	void xuat1();
	

};

void NhanVienKyThuat::Nhap(istream& is)
{
	this->NhanVien::Nhap(is);	// goi method class cha

	char* buf = new char[MAX];
	is.get(buf, MAX, '[');
	is.ignore(1);
	is.get(buf, MAX, ']');
	chungChiNganh.append(buf);
	is.get(buf, MAX, '<');
	is.ignore(1);
	is.get(buf, MAX, '>');
	slSangKien = atoi(buf);	// chuyen chuoi qua so
	is.ignore(1);
	delete[] buf;
}

void NhanVienKyThuat::Xuat(ostream& os)
{
	os << "nvkt: ";
	this->NhanVien::Xuat(os);
	os << " [" << chungChiNganh << "] <" << slSangKien << ">" << endl;

}
ostream& operator <<(ostream& os, NhanVienKyThuat nvkt)
{
	nvkt.Xuat(os);
	return os;
}
istream& operator >>(istream& is, NhanVienKyThuat& nvkt)
{
	nvkt.Nhap(is);
	return is;
}
const char* NhanVienKyThuat::getFlag()
{
	return "nvkt";
}

