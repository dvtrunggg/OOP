#pragma once
#include<iostream>
#include<string>
using namespace std;

class CaSy
{
protected:
	string hoTen;
	int soNam;
	int soDiaBan;
	int soBuoiTrinhDien;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int tinhLuong() = 0;
};
void CaSy::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, hoTen);
	cout << "Nhap so nam tham gia showbiz:): ";
	cin >> soNam;
	cout << "Nhap so dia da ban:";
	cin >> soDiaBan;
	cout << "Nhap so buoi trinh dien: ";
	cin >> soBuoiTrinhDien;
}
void CaSy::Xuat()
{
	cout << endl;
	cout << endl;
	cout << "Ca Sy: " << hoTen << " so nam hoat dong: " << soNam;
	cout << " so dia ban: " << soDiaBan;
	cout << " so buoi trinh dien: " << soBuoiTrinhDien;

}
