#pragma once
#include"NhanVien.h"
class NhanVienKyThuat : public NhanVien
{
private:
	string chungChiNganh;
	int slSangKien;
public:
	friend ostream& operator <<(ostream& os, const NhanVienKyThuat& nvkt);
	friend istream& operator >>(istream& is, NhanVienKyThuat& nvkt);
	static const char* getFlag();
	int get_slSangKien();

	void NhapNhanVienKTMoi();
	void xuatNhanVienKTMoi();

};
ostream& operator <<(ostream& os, const NhanVienKyThuat& nvkt)
{
	os << (NhanVien)nvkt;
	os << " [" << nvkt.chungChiNganh << "] <" << nvkt.slSangKien << ">" << endl;
	return os;
}
istream& operator >>(istream& is, NhanVienKyThuat& nvkt)
{
	is >> (NhanVien&)nvkt;
	char* buf = new char[MAX];
	is.get(buf, MAX, '[');
	is.ignore(1);
	is.get(buf, MAX, ']');
	nvkt.chungChiNganh.append(buf);
	is.get(buf, MAX, '<');
	is.ignore(1);
	is.get(buf, MAX, '>');
	nvkt.slSangKien = atoi(buf);	// chuyen chuoi qua so
	is.ignore(1);
	delete[] buf;
	return is;
}
const char* NhanVienKyThuat::getFlag()
{
	return "nvkt";
}
int NhanVienKyThuat::get_slSangKien()
{
	return slSangKien;
}

void NhanVienKyThuat::NhapNhanVienKTMoi()
{
	NhanVien::nhapNhanVienMoi();
	this->slSangKien = 0;
	cout << "Chung chi nganh: ";
	getline(cin, chungChiNganh);
}

void NhanVienKyThuat::xuatNhanVienKTMoi()
{
	
	cout << "nvkt: ";
	NhanVien::xuatNhanVienMoi();
	cout << " [" <<chungChiNganh << "] <" <<slSangKien << ">" << endl;
}