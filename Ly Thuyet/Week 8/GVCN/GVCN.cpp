#include "GVCN.h"


GVCN::GVCN() : GiaoVien()
{
	m_strLopCN = "none";
}

GVCN::GVCN(char *HoTen, char *strLopCN) :GiaoVien(HoTen)
{
	m_strLopCN = new char[strlen(strLopCN) + 1];
	strcpy(m_strLopCN, strLopCN);

}
GVCN::GVCN(char *HoTen, float MucLuong, char *strLopCN) : GiaoVien(HoTen, MucLuong)
{
	
	m_strLopCN = new char[strlen(strLopCN) + 1];
	strcpy(m_strLopCN, strLopCN);
}
GVCN::GVCN(char *HoTen, float MucLuong, int SoNgayNghi, char *strLopCN) : GiaoVien(HoTen, MucLuong, SoNgayNghi)
{
	m_strLopCN = new char[strlen(strLopCN) + 1];
	strcpy(m_strLopCN, strLopCN);
}

GVCN::GVCN(const GVCN &a):GiaoVien(a)
{
	m_strLopCN = new char[strlen(a.m_strLopCN) + 1];
	strcpy(m_strLopCN, a.m_strLopCN);
}
GVCN& GVCN::operator = (const GVCN &a)
{
	GiaoVien::operator=(a);
	if (this != &a)
	{
		m_strLopCN = new char[strlen(a.m_strLopCN) + 1];
		strcpy(m_strLopCN, a.m_strLopCN);
	}
	return *this;
}

void GVCN::Xuat()
{
	GiaoVien::Xuat();
	cout << "lop chu nhiem " << m_strLopCN << endl;
}

GVCN::~GVCN()
{
	delete[] m_strLopCN;
}
