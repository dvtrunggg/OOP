#pragma once
#include"NhanVien.h"
class NhanVienThuKy : public NhanVien
{
private:
	string chungChiNN;
	int slBaoCao;
public:
	friend ostream& operator <<(ostream& os, NhanVienThuKy nvtk);
	friend istream& operator >>(istream& is, NhanVienThuKy& nvtk);
	static const char* getFlag();
	int checkXuatSac()
	{
		if (this->slBaoCao >= 12)
			return 1;
		return 0;
	}

	virtual void Nhap(istream&);
	virtual void Xuat(ostream&);
	void xuat1();
};

void NhanVienThuKy::Nhap(istream& is)
{
	this->NhanVien::Nhap(is);
	char* buf = new char[MAX];
	is.get(buf, MAX, '[');
	is.ignore(1);
	is.get(buf, MAX, ']');
	chungChiNN.append(buf);
	is.get(buf, MAX, '<');
	is.ignore(1);
	is.get(buf, MAX, '>');
	slBaoCao = atoi(buf);	// chuyen chuoi qua so 
	is.ignore(1);
	delete[] buf;
}

void NhanVienThuKy::Xuat(ostream& os)
{
	os << "nvtk: ";
	this->NhanVien::Xuat(os);
	os << " [" << chungChiNN << "] <" << slBaoCao << ">" << endl;
}
ostream& operator <<(ostream& os,  NhanVienThuKy nvtk)
{
	nvtk.Xuat(os);
	return os;
}

istream& operator >>(istream& is, NhanVienThuKy& nvtk)
{
	nvtk.Nhap(is);
	return is;
}
const char* NhanVienThuKy::getFlag()
{
	return "nvtk";
}

