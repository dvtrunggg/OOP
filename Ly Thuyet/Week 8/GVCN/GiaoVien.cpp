#include "GiaoVien.h"


GiaoVien::GiaoVien()
{
	m_strHoTen = NULL;	// = "none" is ok too:) 
	m_fMucLuong = 0;
	m_iSoNgayNghi = 0;
}

GiaoVien::GiaoVien(char *Name)
{
	m_strHoTen = new char[strlen(Name) + 1];
	strcpy(m_strHoTen, Name);
	m_fMucLuong = 50000;
	m_iSoNgayNghi = 0;
}
GiaoVien::GiaoVien(char *Name, float Salary)
{
	m_strHoTen = new char[strlen(Name) + 1];
	strcpy(m_strHoTen, Name);
	m_fMucLuong = Salary;
	m_iSoNgayNghi = 0;
}

GiaoVien::GiaoVien(char *Name, float Salary, int offDay)
{
	m_strHoTen = new char[strlen(Name) + 1];
	strcpy(m_strHoTen, Name);
	m_fMucLuong = Salary;
	m_iSoNgayNghi = offDay;
}
GiaoVien::GiaoVien(const GiaoVien &gv)
{
	m_strHoTen = new char[strlen(gv.m_strHoTen) + 1];
	strcpy(m_strHoTen, gv.m_strHoTen);
	m_fMucLuong = gv.m_fMucLuong;
	m_iSoNgayNghi = gv.m_iSoNgayNghi;
}

GiaoVien& GiaoVien::operator = (const GiaoVien &gv)
{
	if(this != &gv)
	{
		m_strHoTen = new char[strlen(gv.m_strHoTen) + 1];
		strcpy(m_strHoTen, gv.m_strHoTen);
		m_fMucLuong = gv.m_fMucLuong;
		m_iSoNgayNghi = gv.m_iSoNgayNghi;
	}
	return *this;
}

void GiaoVien::Xuat()
{
	cout << "Ten Giao Vien: " << m_strHoTen << endl;
	cout << "Luong: " << m_fMucLuong << endl;
	cout << "So ngay nghi: " << m_iSoNgayNghi << endl;
}

GiaoVien::~GiaoVien()
{
	delete[] m_strHoTen;
}
