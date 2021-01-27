#include"bai25.h"
void Array::Input()
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

void Array::Output()
{
	cout << "=============== " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

int Array::TakeElement(int l)
{
	return a[l];
}

int Array::ArraySize()
{
	return n * sizeof(a[0]);
}

bool Array::Search(int x)
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

void Array:: Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void  Array::SortA()
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

void  Array::SortD()
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
