#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	thuc = ao = 0;
	sl++;
	ssl++;
}

SoPhuc::SoPhuc(const int& thuc, const int& ao)
{
	this->thuc = thuc;
	this->ao = ao;
	sl++;
	ssl++
}
SoPhuc::SoPhuc(const SoPhuc& sp)
{
	this->thuc = sp.this->thuc;
	ao = sp.ao;
	sl++;
	ssl++;
}
SoPhuc::~SoPhuc()
{
	sl--;
	ssl--;
}
SoPhuc SoPhuc::operator+(const SoPhuc& sp)
{
	Sophuc kq(*this);
	kq.thuc += sp.thuc;
	kq.ao += sp.ao;
	return kq;
}
int SoPhuc::SoLuongSP()
{
	return s1;
}
int SoPhuc::SSoLuongSP()
{
	return ss1;
}
int SoPhuc::ss1 = 0;
void main()
{
	SoPhuc sp1
}