#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class GiaoVien
{
protected:
	int ma;
	string hoTen;
	string diaChi;
	string soDienThoai;
	vector<string> danhSachMonCoTheDay;
public:
	virtual void Nhap()
	{
		cout << "Nhap ma: ";
		cin >> ma;
		cout << "Nhap ho ten: ";
		cin.ignore();
		getline(cin, hoTen);
		cout << "Nhap dia chi: ";
		cin.ignore();
		getline(cin, diaChi);
		cout << "Nhap so dien thoai: ";
		cin >> soDienThoai;

		int n;
		cout << "Nhap so mon ban co the day: ", cin >> n;
		for (int i = 0; i < n; i++)
		{
			string temp;
			cout << "Ten mon hoc:";
			cin.ignore();
			getline(cin, temp);
			danhSachMonCoTheDay.push_back(temp);
		}
	}

	virtual void Xuat()
	{
		cout << "Ten: " <<  hoTen << "dia chi: " <<  diaChi << "SDT: " <<  soDienThoai << endl;
		cout << "Danh sach mon co the day: ";
		for (int i = 0; i < danhSachMonCoTheDay.size(); i++)
		{
			cout << danhSachMonCoTheDay[i] << "\t";
		}
	}
	virtual int tienBaoHiem() = 0;
};