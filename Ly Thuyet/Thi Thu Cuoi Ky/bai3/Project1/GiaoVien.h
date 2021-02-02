#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class GiaoVien
{
private:
	int ma;
	string hoTen;
	string diaChi;
	string soDienThoai;
	vector<string> danhSachMonCoTheDay;
	int laGiaoVienCLC;
public:
	friend ostream& operator << (ostream& os, const GiaoVien& gv);
	friend istream& operator >> (istream& is, GiaoVien& gv);

};

