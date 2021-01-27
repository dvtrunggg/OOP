#pragma once
#include"NhanVien.h"
#include"NhanVienVanPhong.h"
#include"NhanVienSanXuat.h"
#include"NhanVienQuanLy.h"
#include<vector>

class CongTy
{
private:
	vector<NhanVien*> dsNhanVien;
	static CongTy* Instance;
	CongTy();
public:
	void Nhap();
	void Xuat();
	int tongLuongPhaiTra();
	void timTen();
	static CongTy* getInstance();

};

