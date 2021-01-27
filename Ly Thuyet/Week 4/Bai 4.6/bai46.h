#include <iostream>
using namespace std;
#include <string>
class HocSinh
{
private:
	string FullName;
	float Math, Literature;
	float AverageScore;
public:
	HocSinh();
	HocSinh(string name, float m, float l);
	HocSinh(string name, float l);
	HocSinh(const HocSinh& hs);
	void Input();
	void Output();
	float Average();

	HocSinh& operator =(const HocSinh& hs);
	bool operator >(HocSinh& hs);
	bool operator >=(HocSinh& hs);
	bool operator <(HocSinh& hs);
	bool operator <=(HocSinh& hs);
	bool operator ==(HocSinh& hs);
	bool operator !=(HocSinh& hs);

	friend ostream& operator<<(ostream& out,  HocSinh& hs);
	friend istream& operator>>(istream& in,  HocSinh& hs);
};
