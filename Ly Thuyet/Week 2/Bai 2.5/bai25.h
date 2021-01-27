#include <iostream>

using namespace std;

class  Array 
{
private:
	int* a;
	int n;
public:
	void Input();
	void Output();
	int TakeElement(int l); 
	int ArraySize();
	bool Search(int x);
	void Swap(int& a, int& b);
	void SortA();
	void SortD();
};
