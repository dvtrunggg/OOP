#pragma once
#include <iostream>
#include<string>
using namespace std;

class TaiKhoan
{
private:
	float m_fSoDu = 0;
public:
	void Nhap()
	{
		 cin >> m_fSoDu;
	}
	void Xuat()
	{
		cout << m_fSoDu;
	}
	float baoSoDu()
	{
		return m_fSoDu;
	}
	void napTien(float fSoTien)
	{
		m_fSoDu += fSoTien;
	}
	void rutTien(float fSoTien)
	{
		if (fSoTien <= m_fSoDu)
			m_fSoDu -= fSoTien;
	}

};

