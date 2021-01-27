#include <iostream>

using namespace std;

class  CArray 
{
private:
	int* a;
	int n;
public:
	void Input();
	void Output();
	int GetElement(int l); 
	int ArraySize();	// = ? byte
	int GetSize();
	int GetN();
	void SetN(const int& _n);
	bool SetValue(const int& value, const int& index);
	bool Search(int x);
	void Swap(int& a, int& b);
	void SortA();
	void SortD();

	CArray();
	CArray(int n);
	CArray(int* arr, int n);
	CArray(const CArray& arr);
	~CArray();
	int& operator[](int);
	const CArray& operator = (const CArray&);
	friend ostream& operator << (ostream& os, CArray& arr);
	friend istream& operator >> (istream& is, CArray& arr);

};
