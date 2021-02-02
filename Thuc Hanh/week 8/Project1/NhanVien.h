#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
using namespace std;
#define MAX 100
class NhanVien
{
protected:
	string Name;
	string Address;

public:
	friend ostream& operator <<(ostream& os, NhanVien& nv);		// no const:) because we call method Xuat() in this fuction. Still have NhanVien& nv ( because in CongTY.h will eror if haven't it)
	friend istream& operator >>(istream& is, NhanVien& nv);
	void xuat1();
	// because virtual just using for method, not function. friend....is a function
	// so we have to create method Input, Print and call it in function >>, <<......
	virtual void Nhap(istream& );
	virtual void Xuat(ostream& );
	virtual int checkXuatSac() = 0;
	void Nhap1();
	
};

void NhanVien::Nhap(istream& is)
{
	char* buf = new char[MAX];
	is.get(buf, MAX, '(');	
	
	int len = strlen(buf);
	Name.append(buf, len - 1);	
	is.ignore(1);				
	is.get(buf, MAX, ')');	
	Address.append(buf);
	delete[] buf;
}
void NhanVien::Xuat(ostream& os )
{
	os << Name << " (" << Address << ")";
}
ostream& operator <<(ostream& os, NhanVien& nv)
{
	nv.Xuat(os);
	return os;
}

istream& operator >>(istream& is, NhanVien& nv)
{
	nv.Nhap(is);
	return is;
}

void NhanVien::xuat1()
{
	cout << "Ho ten : " << this->Name;
	cout << "; Dia chi : " << this->Address << endl;
}
void NhanVien::Nhap1()
{
	cout << "Ho ten:";
	cin.ignore();
	getline(cin, Name);
	cout << "Dia chi: ";
	cin.ignore();
	getline(cin, Address);
}
