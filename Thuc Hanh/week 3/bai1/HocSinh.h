#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class HocSinh
{
private:
	string _FullName;
	float _Math, _Literature, _English;
	float _DTB;
	int _ID;

	static int ID;
	static float maxDTB;
	static string maxName;
	static int maxID;
public:
	HocSinh();
	HocSinh(string FullName, float Math, float Literature, float English);
	//HocSinh(const HocSinh& hs);
	~HocSinh();
	void DatHoTen(string name);
	void GanDiem(float Math, float Literature, float English);
	static HocSinh HSDiemTBCaoNhat();
	void Xuat();
};

