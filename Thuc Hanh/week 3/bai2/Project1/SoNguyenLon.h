#include <iostream>
#include<string>
using namespace std;

class SoNguyenLon
{
private:
	int NumLen;
	char StrNum[100];
	static SoNguyenLon NumMax;
public:
	SoNguyenLon()
	{
		this->NumLen = 1;
		this->StrNum[0] = '0';
	}
	SoNguyenLon(int num, int _numLen);
	SoNguyenLon(int num);
	~SoNguyenLon()
	{

	}
	SoNguyenLon PhepCong(SoNguyenLon B);
	SoNguyenLon PhepCong(int Num);
	SoNguyenLon PhepTru(SoNguyenLon B);
	SoNguyenLon PhepTru(int Num);
	static SoNguyenLon SNLMax();
	void Xuat();
};

