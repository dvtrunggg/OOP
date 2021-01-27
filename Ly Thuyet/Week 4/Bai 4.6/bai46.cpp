#include"bai46.h"

HocSinh::HocSinh()
{
	this->FullName = " ";
	this->Literature = 0;
	this->Math = 0;
	//this->Average = 0;
}
HocSinh::HocSinh(string name, float m, float l)
{
	this->FullName = name;
	this->Literature = l;
	this->Math = m;
}
HocSinh::HocSinh(string name, float l)
{
	this->FullName = name;
	this->Literature = l;
	this->Math = 0;
}
HocSinh::HocSinh(const HocSinh& hs)
{
	this->FullName = hs.FullName;
	this->Literature = hs.Literature;
	this->Math = hs.Math;
	//this->Average = hs.AverageScore;
}


float HocSinh::Average()
{
	AverageScore = ((Math + Literature) / 2);
	return AverageScore;
}

HocSinh&  HocSinh::operator = (const HocSinh &hs)
{
	this->FullName = hs.FullName;
	this->Math = hs.Math;
	this->Literature = hs.Literature;
	this->AverageScore = hs.AverageScore;
	return *this;
}

// so sánh diểm trung bình 
bool HocSinh::operator >= (HocSinh& hs)
{
	if (AverageScore >= hs.AverageScore)
		return true;
	return false;
}
bool HocSinh::operator > (HocSinh& hs)
{
	if (AverageScore > hs.AverageScore)
		return true;
	return false;
}
bool HocSinh::operator <= (HocSinh& hs)
{
	if (AverageScore <= hs.AverageScore)
		return true;
	return false;
}
bool HocSinh::operator < (HocSinh& hs)
{
	if (AverageScore < hs.AverageScore)
		return true;
	return false;
}
bool HocSinh::operator == (HocSinh& hs)
{
	if (AverageScore == hs.AverageScore)
		return true;
	return false;
}
bool HocSinh::operator != (HocSinh& hs)
{
	if (AverageScore != hs.AverageScore)
		return true;
	return false;
}
void HocSinh::Input()
{
	fflush(stdin);
	cout << "Enter FullName: " << endl;
	getline(cin, FullName);
	cout << "Enter Math Score : " << endl;
	cin >> Math;
	cout << "Enter Literature Score: " << endl;
	cin >> Literature;
}
void HocSinh::Output()
{
	cout << "Name: " << FullName << endl;
	cout << "Math Score: " << Math << endl;
	cout << "Literature Score: " << Literature << endl;
	cout << "Average Score: " << HocSinh::Average() << endl;
}
istream& operator>>(istream& in,  HocSinh& hs)
{
	hs.Input();
	return in;
}
ostream& operator<<(ostream& out,  HocSinh& hs)
{

	hs.Output();
	return out;
}

