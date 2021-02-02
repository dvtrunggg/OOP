#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
#define MAX 100
class NhanVien
{
protected:
	string Name;
	string Address;
public:
	friend ostream& operator <<(ostream& os, const NhanVien& nv);
	friend istream& operator >>(istream& is, NhanVien& nv);
	//dùng friend: nếu về trái ko thuộc class ( os và is ko thuộc class)
	void nhapNhanVienMoi();
	void xuatNhanVienMoi();
};

ostream& operator <<(ostream& os, const NhanVien& nv)
{
	os << nv.Name << " (" << nv.Address << ")";
	return os;
}
//nvkt: Tran Van A (Tp Ho Chi Minh) [Dien] <10>
istream& operator >>(istream& is, NhanVien& nv)
{
	char* buf = new char[MAX];	
	is.get(buf, MAX, '(');	//lấy chuỗi, '(' là ký tự kết thúc. nếu ko truyền thì mặc định là '\n'
	// ở đây, ta lấy từ đầu chuỗi tới '(': nvkt: Tran Van A 
	int len = strlen(buf);
	nv.Name.append(buf, len - 1);	// nối chuỗi buf. ở đây, buf sẽ chứa: nvkt: Tran Van A 
	is.ignore(1);				// bỏ qua 1 ký tự:)
	is.get(buf, MAX, ')');		//	Tp Ho Chi Minh
	nv.Address.append(buf);		
	delete[] buf;
	return is;
}

void NhanVien::nhapNhanVienMoi()
{
	cout << "Nhap Ten: ";
	cin.ignore();
	getline(cin, Name);
	cout << "Dia chi:";
	getline(cin, Address);
}
void NhanVien::xuatNhanVienMoi()
{
	cout << Name << "(" << Address << ")";
}



