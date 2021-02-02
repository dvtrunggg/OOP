// ko dùng singleton
// ý tưởng: dùng mảng để chứa 1 phần tử là 1 nhân viên.
// ta sẽ đếm số lượng đối tượng được tạo ra. Nếu số lượng đó >1 thì không cho tạo thêm nữa.
#pragma once
#include<iostream>
using namespace std;
#include<string>
class NhanVien
{
private:
	string ten;
	int tuoi;
	
public:
	void Xuat();
	NhanVien();
};
NhanVien::NhanVien()
{
	cout << "Nhap ten: ";
	getline(cin, ten);
	cout << "Nhap tuoi: ", cin >> tuoi;
	cin.ignore();
}
void NhanVien::Xuat()
{
	cout << "Name: " << ten << ", Age: " << tuoi << endl;
}


class QuanLy 
{
private:
	NhanVien *ds;
	int size;
	static int sl;
	
public:
	QuanLy();
	void Xuat();
};

int QuanLy::sl = 0;
QuanLy::QuanLy()
{
	if (sl > 0)
	{
		cout << "=============================="<<endl;
		cout << "Khong the tao. Chi tao 1 doi tuong duy nhat " << endl;
		exit(0);
	}
	size = 1;
	ds = new NhanVien;
	sl++;
	
}
void QuanLy::Xuat()
{
	ds->Xuat();
}

