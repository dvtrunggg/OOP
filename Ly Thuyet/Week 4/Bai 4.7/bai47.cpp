#include"bai47.h"

// bài mới:
CArray::CArray()
{
	a = NULL;
	n = 0;
}

CArray::CArray(int n)
{
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = 0;
}
CArray::CArray(const CArray& arr)
{
	a = new int[arr.n];
	for (int i = 0; i < n; i++)
		a[i] = arr.a[i];
}
CArray::~CArray()
{
	if (a != NULL)
	{
		delete[]a;
		a = NULL;
	}
	n = 0;
}

int& CArray::operator[](int index)
{
	if (index >= n)
		exit(0);
	return a[index];
}

const CArray& CArray::operator=(const CArray& arr)
{
	if (&arr != this)
	{
		if (n != arr.n)
		{
			delete[]a;
			n = arr.n;
			a = new int[n];
		}
	}
	for (int i = 0; i < n; i++)
		a[i] = arr.a[i];
	return *this;
}

ostream& operator << (ostream& os, CArray& arr)
{
	for (int i = 0; i < arr.n; i++)
		os << arr.a[i] << " ";
	return os;
}

istream& operator >> (istream& is, CArray& arr)
{
	cout << "Nhap n: ";
	is >> arr.n;
	arr.a = new int[arr.n];
	for (int i = 0; i < arr.n; i++)
	{
		cout << "a[" << i << "] = ";
		is >> arr.a[i];
	}
	return is;
}

int CArray::GetN()
{
	return n;
}

void CArray::SetN(const int& _n)
{
	n = _n;
	if (n < 0)
		n = 0;
}


int CArray::GetSize()
{
	return n;
}

bool CArray::SetValue(const int& value, const int& index)
{
	if (index < 0 || index >= n)
		return false;
	a[index] = value;
	return true;
}


//======================================================================================//
void CArray::Input()
{
	cout << "Enter the numbers of Array: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "] :";
		cin >> a[i];
	}
}

void CArray::Output()
{
	cout << "=============== " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

int CArray::GetElement(int l)
{
	return a[l];
}

int CArray::ArraySize()
{
	return this->n * sizeof(a[0]);
}

bool CArray::Search(int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			return true;
		}
	}
	return false;
}

void CArray:: Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void  CArray::SortA()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}

void  CArray::SortD()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}










