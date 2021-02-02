#pragma once
#include"NhanVien.h"
class NhanVienThuKy : public NhanVien
{
private:
	string chungChiNN;
	int slBaoCao;
public:
	friend ostream& operator <<(ostream& os, const NhanVienThuKy& nvtk);
	friend istream& operator >>(istream& is, NhanVienThuKy& nvtk);
	static const char* getFlag();
	int get_slBaoCao();

	void nhapNhanVienTKMoi();
	void xuatNhanVienTKMoi();
};
ostream& operator <<(ostream& os, const NhanVienThuKy& nvtk)
{
	os << (NhanVien)nvtk;
	os << " [" << nvtk.chungChiNN << "] <" << nvtk.slBaoCao << ">" << endl;
	return os;
}

istream& operator >>(istream& is, NhanVienThuKy& nvtk)
{
	is >> (NhanVien&)nvtk;
	char* buf = new char[MAX];
	is.get(buf, MAX, '[');
	is.ignore(1);
	is.get(buf, MAX, ']');
	nvtk.chungChiNN.append(buf);
	is.get(buf, MAX, '<');
	is.ignore(1);
	is.get(buf, MAX, '>');
	nvtk.slBaoCao = atoi(buf);	// chuyen chuoi qua so 
	is.ignore(1);
	delete[] buf;
	return is;
}
const char* NhanVienThuKy::getFlag()
{
	return "nvtk";
}
int NhanVienThuKy::get_slBaoCao()
{
	return slBaoCao;
}

void NhanVienThuKy::xuatNhanVienTKMoi()
{
	
	cout << "nvtk: ";
	NhanVien::xuatNhanVienMoi();
	cout << " [" << chungChiNN << "] <" << slBaoCao << ">" << endl;
}

void NhanVienThuKy::nhapNhanVienTKMoi()
{
	NhanVien::nhapNhanVienMoi();
	this->slBaoCao = 0;
	cout << "Chung chi ngoai ngu: ";
	getline(cin, chungChiNN);
	
}
