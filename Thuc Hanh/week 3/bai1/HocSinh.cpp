#include "HocSinh.h"
int HocSinh:: ID = 1363001;
float HocSinh::maxDTB = 0;
string HocSinh::maxName = " ";
int HocSinh::maxID = 0;

HocSinh::HocSinh()
{
	_FullName = " ";
	_Math = _Literature = _English = 0;
	_DTB = 0;
	ID++;
	_ID = ID;
}

HocSinh::HocSinh(string FullName, float Math, float Literature, float English)
{
	this->_FullName = FullName;
	this->_Math = Math;
	this->_Literature = Literature;
	this->_English = English;
	ID++;
	this->_ID = ID;
	
	_DTB = (_Math + _Literature + _English) / 3;
	if(Math < 0)
		_DTB = (-_Math + _Literature + _English) / 3;
	if(Literature < 0)
		_DTB = (_Math - _Literature + _English) / 3;
	if(English < 0)
		_DTB = (_Math + _Literature - _English) / 3;

	if (_DTB > maxDTB)
	{
		maxDTB = _DTB;
		maxName = _FullName;
		maxID = _ID;
	}

}
//HocSinh::HocSinh(const HocSinh& hs)
//{
//	this->_FullName = hs._FullName;
//	this->_Math = hs._Math;
//	this->_Literature = hs._Literature;
//	this->_English = hs._English;
//}
HocSinh::~HocSinh()
{

}
void HocSinh::DatHoTen(string name)
{
	_FullName = name;
}
void HocSinh::GanDiem(float Math, float Literature, float English)
{
	_Math = Math;
	_Literature = Literature;
	_English = English;
	_DTB = (_Math + _Literature + _English) / 3;
}

HocSinh HocSinh::HSDiemTBCaoNhat()
{
	HocSinh hs;
	hs._FullName = maxName;
	hs._DTB = maxDTB;
	hs._ID = maxID;
	return hs;
}

void HocSinh::Xuat()
{
	cout <<"HS: "<<_FullName<<" , MS: "<< _ID << ", DTB: "<<_DTB<< endl;

}