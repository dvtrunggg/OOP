#include"SoTietKiem.h"

SoTietKiemKKH::SoTietKiemKKH()
{
	this->CMND = "000000000000";
	this->hoTen = "noname";
	this->soTien = 0;
	this->ngayNhap.nhap(1, 1, 0);
	this->laiSuat = 0;
	//this->kiHan = -1;
}

SoTietKiemKKH::SoTietKiemKKH(string cmnd, string hoTen, double soTien, CDate ngayNhap, float laiSuat)
{
	this->CMND = cmnd;
	this->hoTen = hoTen;
	this->soTien = soTien;
	this->ngayNhap = ngayNhap;
	this->laiSuat = laiSuat;
}

SoTietKiemKKH::SoTietKiemKKH(const SoTietKiemKKH& stk)
{
	this->CMND = stk.CMND;
	this->hoTen = stk.hoTen;
	this->soTien = stk.soTien;
	this->ngayNhap = stk.ngayNhap;
	this->laiSuat = stk.laiSuat;
}

SoTietKiemKKH::~SoTietKiemKKH()
{
	cout << "Da huy!" << endl;
}

istream& operator>>(istream& is, SoTietKiemKKH& stk)
{
	cout << "Nhap CMND: ";
	is >> stk.CMND;
	is.ignore();
	cout << "Nhap ho va ten: ";
	getline(is, stk.hoTen);
	cout << "Nhap so tien: ";
	is >> stk.soTien;
	int ngay, thang, nam;
	cout << "Nhap ngay nhap: ";
	cin >> ngay;
	cout << "Nhap thang nhap: ";
	cin >> thang;
	cout << "Nhap nam nhap: ";
	cin >> nam;
	stk.ngayNhap.nhap(ngay, thang, nam);

	cout << "Nhap lai suat: ";
	is >> stk.laiSuat;
	return is;
}

ostream& operator<<(ostream& os, const SoTietKiemKKH& stk)
{
	os << "CMND:" << stk.CMND << endl;
	os << "Ho ten: " << stk.hoTen << endl;
	os << "So tien:" << stk.soTien << " trieu dong" << endl;
	
	CDate date;
	date.nhap(stk.ngayNhap);
	os << "Ngay nhap: " << date.layNgay() << "/" << date.layThang() << "/" << date.layNam() << endl;

	os << "Lai suat: " << stk.laiSuat << "%" << endl;
	return os;
}

double SoTietKiemKKH::soTienLai()
{
	CDate date1;
	date1.nhap(this->ngayNhap);
	
	time_t t;
	time(&t);
	tm now;
	localtime_s(&now, &t);

	CDate date2;
	date2.nhap(now.tm_mday, now.tm_mon + 1, now.tm_year + 1900);

	int dateDiff = date1.khoangCach(date2);
	dateDiff /= 30;
	/*if (this->kiHan <= 0) 
	{*/
	return double(this->soTien * float(this->laiSuat/100) * dateDiff);
	//}
	/*else
	{
		if (dateDiff >= this->kiHan)
			return double(this->soTien * float(this->laiSuat / 100) * dateDiff);
		else
		{
			return 0;
		}
	}*/
}

///co ki han
SoTietKiemCKH::SoTietKiemCKH()
{
	this->CMND = "000000000000";
	this->hoTen = "noname";
	this->soTien = 0;
	this->ngayNhap.nhap(1, 1, 0);
	this->laiSuat = 0;
	this->kiHan = 0;
}

SoTietKiemCKH::SoTietKiemCKH(string cmnd, string hoTen, double soTien, CDate ngayNhap, float laiSuat, int kiHan)
{
	this->CMND = cmnd;
	this->hoTen = hoTen;
	this->soTien = soTien;
	this->ngayNhap = ngayNhap;
	this->laiSuat = laiSuat;
	this->kiHan = kiHan;
}

SoTietKiemCKH::SoTietKiemCKH(const SoTietKiemCKH& stk)
{
	this->CMND = stk.CMND;
	this->hoTen = stk.hoTen;
	this->soTien = stk.soTien;
	this->ngayNhap = stk.ngayNhap;
	this->laiSuat = stk.laiSuat;
	this->kiHan = stk.kiHan;
}

SoTietKiemCKH::~SoTietKiemCKH()
{
	cout << "Da huy!" << endl;
}

istream& operator>>(istream& is, SoTietKiemCKH& stk)
{
	cout << "Nhap CMND: ";
	is >> stk.CMND;
	is.ignore();
	cout << "Nhap ho va ten: ";
	getline(is, stk.hoTen);
	//is >> stk.hoTen;
	cout << "Nhap so tien: ";
	is >> stk.soTien;
	cout << "Nhap ki han: ";
	is >> stk.kiHan;
	int ngay, thang, nam;
	cout << "Nhap ngay nhap: ";
	cin >> ngay;
	cout << "Nhap thang nhap: ";
	cin >> thang;
	cout << "Nhap nam nhap: ";
	cin >> nam;
	stk.ngayNhap.nhap(ngay, thang, nam);

	cout << "Nhap lai suat: ";
	is >> stk.laiSuat;
	return is;
}

ostream& operator<<(ostream& os, const SoTietKiemCKH& stk)
{
	os << "CMND:" << stk.CMND << endl;
	os << "Ho ten: " << stk.hoTen << endl;
	os << "So tien:" << stk.soTien << " trieu dong" << endl;

	CDate date;
	date.nhap(stk.ngayNhap);
	os << "Ngay nhap: " << date.layNgay() << "/" << date.layThang() << "/" << date.layNam() << endl;

	os << "Lai suat: " << stk.laiSuat << "%" << endl;
	os << "Ki han: " << stk.kiHan << " thang" << endl;
	return os;
}

double SoTietKiemCKH::soTienLai()
{
	CDate date1;
	date1.nhap(this->ngayNhap);

	time_t t;
	time(&t);
	tm now;
	localtime_s(&now, &t);

	CDate date2;
	date2.nhap(now.tm_mday, now.tm_mon + 1, now.tm_year + 1900);

	int dateDiff = date1.khoangCach(date2);
	dateDiff /= 30;
	
	if (dateDiff >= this->kiHan)
		return double(this->soTien * float(this->laiSuat / 100) * dateDiff);
	else
		return 0;
}