#include<iostream>
#include<math.h>
using namespace std;
class SoPhuc
{
private:
	float phanThuc;
	float phanAo;
public:
	SoPhuc();
	SoPhuc(int T, int A);
	SoPhuc(int T);
	SoPhuc(const SoPhuc& sp);
	~SoPhuc()
	{

	}
	// operator:
	SoPhuc operator+ (const SoPhuc& sp);
	SoPhuc operator- (const SoPhuc& sp);
	SoPhuc operator* (const SoPhuc& sp);
	SoPhuc operator/ (const SoPhuc& sp);
	SoPhuc& operator= (const SoPhuc& sp);
	SoPhuc& operator+= (const SoPhuc& sp);
	SoPhuc& operator-= (const SoPhuc& sp);

	float Module();
	bool operator >= ( SoPhuc& sp);
	bool operator >  ( SoPhuc& sp);
	bool operator <= ( SoPhuc& sp);
	bool operator <  ( SoPhuc& sp);
	bool operator == ( SoPhuc& sp);
	bool operator != ( SoPhuc& sp);

	SoPhuc operator ++();		// ++sp
	SoPhuc operator ++ (int notUse);	//sp++
	SoPhuc operator --();		// --sp
	SoPhuc operator -- (int notUse);	//sp--

	operator float() const;
	operator int() const;

	friend ostream& operator <<(ostream& os, const SoPhuc& sp);
	friend istream& operator>>(istream& is, const SoPhuc& sp);

};

