#include<iostream>
#include <stdlib.h>
using namespace std;

void InputArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ", cin >> a[i];
	}
}


// Generate random numbers in array a[]
void GenerateArray(int a[], const int &n, const int min, const int max)
{
	srand(1000);
	for (int i = 0; i < n; i++)
	{
		a[i] = min + (rand() % (max - min + 1));
	}
}

void PrintArray(int a[], int n)
{
	cout << "a[] = ";
	for (int i = 0; i < n; i++)
		cout <<"   "<<a[i];
}
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
// Sort Ascending
void SortA(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n; j++)
			if (a[i] > a[j]) Swap(a[i], a[j]);
}

// Sort Descending
void SortD(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n; j++)
			if (a[i] < a[j]) Swap(a[i], a[j]);
}
 void SortWithRemainder5(int a[], int n)
 {
 	int *p = new int[n]; 
 	for(int i = 0; i<n; i++)
	{
 		p[i] = a[i] % 5; 
	}
	SortA(p,n);
	PrintArray(p,n);
	delete[] p; 
 }
 void SortWithRemainder7(int a[], int n)
 {
 	int *p = new int[n]; 
 	for(int i = 0; i<n; i++)
	{
 		p[i] = a[i] % 7; 
	}
	SortD(p,n);
	PrintArray(p,n); 
	delete [] p;
 }
int main()
{
	int a[100];
	int n;
	int minn = 1;        // min index in array 
	int maxx = 100;			// max index in array
	cout << "Enter number of indexes array: ", cin >> n;

	//cout << "=====Enter your array: ======"<< endl;
	//InputArray(a, n);   // if you want to input yourself:)

	GenerateArray(a, n, minn, maxx);
	cout << "===================Your array: ====================" << endl;
	PrintArray(a, n);
	cout << "\n================================================="<<endl;
	/*cout << "\t Sort Ascending:  "<<endl;
	SortA(a, n);
	PrintArray(a, n);
	cout << "\t Sort Descending:  "<<endl;
	SortD(a, n);
	PrintArray(a, n);*/
	cout << "Numbers have surplus divided by 5 are arranged in ascending order: " << endl;
	SortWithRemainder5(a,n);
	cout << "\nNumbers have surplus divided by 7 are arranged in descending order: " << endl;
	SortWithRemainder7(a,n);
	system("pause");
	return 0;
}
