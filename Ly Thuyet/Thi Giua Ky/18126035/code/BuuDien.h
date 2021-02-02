//Dinh Viet Trung - 18126035
#pragma once
#include"HangHoa.h"
#include"Thu.h"
#include<vector>
class BuuDien
{
private:
	vector <HangHoa> h;
	vector <Thu> th;
public:
	BuuDien();
	void Nhap();
	void Xuat();
	int TongChiPhi();
};

