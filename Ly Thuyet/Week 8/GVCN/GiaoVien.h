#include <iostream>
#include<stdio.h> 
#include<string.h> 
#pragma warning(disable : 4996)

using namespace std;

class GiaoVien
{
private:
	char *m_strHoTen;
	float m_fMucLuong;
	int m_iSoNgayNghi;
public:
	float TinhLuong() 
	{
		return m_fMucLuong - m_iSoNgayNghi*10000;
	}

	GiaoVien();
	GiaoVien(char *);
	GiaoVien(char *, float );
	GiaoVien(char *, float , int );
	~GiaoVien();

	void Xuat();
	GiaoVien(const GiaoVien &);
	GiaoVien& operator = (const GiaoVien &);

};

