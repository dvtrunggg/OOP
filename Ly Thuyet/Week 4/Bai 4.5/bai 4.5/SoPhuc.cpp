#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	phanThuc = 0;
	phanAo = 0;
}
SoPhuc::SoPhuc(int T, int A)	//T: thuc; A: ao
{
	this->phanThuc = T;
	this->phanAo = A;
}
SoPhuc::SoPhuc(int T)
{
	this->phanThuc = T;
	this->phanAo = 0;
}
SoPhuc::SoPhuc(const SoPhuc& sp)
{
	this->phanThuc = sp.phanThuc;
	this->phanAo = sp.phanAo;
}
SoPhuc SoPhuc::operator+ (const SoPhuc& sp)
{
	SoPhuc spResult;
	spResult.phanThuc = this->phanThuc + sp.phanThuc;
	spResult.phanAo = this->phanAo + sp.phanAo;
	return spResult;
}
SoPhuc SoPhuc::operator- (const SoPhuc& sp)
{
	SoPhuc spResult;
	spResult.phanThuc = this->phanThuc - sp.phanThuc;
	spResult.phanAo = this->phanAo - sp.phanAo;
	return spResult;
}
SoPhuc SoPhuc::operator* (const SoPhuc& sp)
{
	SoPhuc spResult;
	spResult.phanThuc = this->phanThuc * sp.phanThuc - sp.phanAo * this->phanAo;
	spResult.phanAo = this->phanThuc * sp.phanAo + sp.phanThuc * this->phanAo;
	return spResult;
}
SoPhuc SoPhuc::operator/ (const SoPhuc& sp)
{
	if (sp.phanAo == 0 && sp.phanThuc == 0)
		return NULL;
	SoPhuc spResult;
	spResult.phanThuc = (this->phanThuc * sp.phanThuc + sp.phanAo * this->phanAo) / (sp.phanThuc* sp.phanThuc + sp.phanAo* sp.phanAo);
	spResult.phanAo = (this->phanThuc * sp.phanAo - sp.phanThuc * this->phanAo)/ (sp.phanThuc * sp.phanThuc + sp.phanAo * sp.phanAo);
	return spResult;
}

SoPhuc& SoPhuc::operator= (const SoPhuc& sp)
{
	this->phanAo = sp.phanAo;
	this->phanThuc = sp.phanThuc;
	return *this;
}
SoPhuc& SoPhuc::operator+= (const SoPhuc& sp)
{
	this->phanAo = this->phanAo + sp.phanAo;
	this->phanThuc = this->phanThuc + sp.phanThuc;
	return *this;
}
SoPhuc& SoPhuc::operator-= (const SoPhuc& sp)
{
	this->phanAo = this->phanAo - sp.phanAo;
	this->phanThuc = this->phanThuc - sp.phanThuc;
	return *this;
}


float SoPhuc::Module()
{
	return sqrt(phanThuc * phanThuc + phanAo * phanAo);
}
bool SoPhuc :: operator >= ( SoPhuc& sp)
{
	if (Module() >= sp.Module())
		return true;
	return false;
}
bool SoPhuc :: operator > (SoPhuc& sp)
{
	if (Module() > sp.Module())
		return true;
	return false;
}
bool SoPhuc :: operator <= (SoPhuc& sp)
{
	if (Module() > sp.Module())
		return true;
	return false;
}
bool SoPhuc :: operator < (SoPhuc& sp)
{
	if (Module() > sp.Module())
		return true;
	return false;
}
bool SoPhuc :: operator == (SoPhuc& sp)
{
	if (Module() == sp.Module())
		return true;
	return false;
}
bool SoPhuc :: operator != (SoPhuc& sp)
{
	if (Module() != sp.Module())
		return true;
	return false;
}

SoPhuc SoPhuc::operator ++()	//++sp
{
	this->phanThuc = this->phanThuc + 1;
	return *this;
}
SoPhuc SoPhuc::operator ++(int notUser)	//sp++
{
	SoPhuc temp = *this;
	++(*this);
	return temp;
}

SoPhuc SoPhuc::operator --()	//--sp
{
	this->phanThuc = this->phanThuc - 1;
	return *this;
}
SoPhuc SoPhuc::operator --(int notUser)	//sp--
{
	SoPhuc temp = *this;
	--(*this);
	return temp;
}
SoPhuc :: operator float() const
{
	
	return (float)phanThuc;
}
SoPhuc :: operator int() const
{
	return (int)phanThuc;
}
ostream& operator <<(ostream& os, const SoPhuc& sp)
{
	cout << sp.phanThuc << " + " << sp.phanAo << "i" << endl;
	return os;
}
istream& operator>>(istream& is, const SoPhuc& sp)
{
	cout << "Nhap phan thuc: ", cin >> sp.phanThuc;
	cout << "Nhap phan ao: ", cin >> sp.phanAo;
	return is;
}