// hello, đây là demo 2 của singleton. 
// đề bài: 1 cửa hàng nhỏ tuyển 1 nhân viên.......

#pragma once
#include<iostream>
using namespace std;
#include<string>
class NhanVien
{
private:
	string ten;
	int tuoi;
	static NhanVien* Instance;
	NhanVien();
	~NhanVien();
public:
	static NhanVien* getInstance();
	void Xuat();

	// constructor coppy và operator = nếu đặt ở public thì phải delete nha:)
	NhanVien(const NhanVien&) = delete;
	NhanVien& operator = (const NhanVien&) = delete;

};


NhanVien::NhanVien()
{
	cout << "Nhap ten: ";
	getline(cin, ten);
	cout << "Nhap tuoi: ", cin >> tuoi;
}
NhanVien::~NhanVien()
{
	if (Instance)
	{
		Instance = NULL;
	}
	cout << "da huy" << endl;
}
NhanVien* NhanVien::Instance = NULL;
NhanVien* NhanVien::getInstance()
{
	if (Instance == NULL)
	{
		Instance = new NhanVien;
	}
	return Instance;
}
void NhanVien::Xuat()
{
	cout << "Name: " << ten << ", Age: " << tuoi << endl;
}