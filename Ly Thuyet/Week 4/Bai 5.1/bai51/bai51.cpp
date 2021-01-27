#include <iostream>
using namespace std;

template<class T>
class CArray
{
private:
	T* a;
	int soLuong;
public:
	void Input();
	void Output();
	T GetElement(int p);
	int ArraySize();
	bool Search(T x);
	void Swap(T& a, T& b);
	void SortA();
	void SortD();
};

template<class T>
void CArray<T>::Input()
{
	cout << "Enter the numbers of Array: ";
	cin >> soLuong;
	a = new T[soLuong];
	for (int i = 0; i < soLuong; i++)
	{
		cout << " a[" << i << "] :";
		cin >> a[i];
	}
}
template<class T>
void CArray<T>::Output()
{
	cout << "============================ " << endl;
	for (int i = 0; i < soLuong; i++)
	{
		cout << a[i] << "\t";
	}
}
template<class T>
T CArray<T>::GetElement(int p)
{
	return a[p];
}
template<class T>
int CArray<T>::ArraySize()
{
	return soLuong * sizeof(a[0]);
}

template<class T>
bool CArray<T>::Search(T x)
{
	for (int i = 0; i < soLuong; i++)
	{
		if (x == a[i])
		{
			return true;
		}
	}
	return false;
}
template<class T>
void CArray<T>::Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<class T>
void  CArray<T>::SortA()
{
	for (int i = 0; i < soLuong - 1; i++)
	{
		for (int j = i + 1; j < soLuong; j++)
		{
			if (a[i] > a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}
template<class T>
void  CArray<T>::SortD()
{
	for (int i = 0; i < soLuong - 1; i++)
	{
		for (int j = i + 1; j < soLuong; j++)
		{
			if (a[i] < a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}
int main()
{
	//CArray <int> a;
	CArray <float> a;
	a.Input();
	a.Output();

	float n;
	cout << "Search Number: ", cin >> n;
	if (a.Search(n) == false)
		cout << " Not Exist" << endl;
	else
		cout << n << " exists" << endl;
	cout << "Ascending Sort:" << endl;
	a.SortA();
	a.Output();
	cout << "Descending Sort:" << endl;
	a.SortD();
	a.Output();
	return 0;
}