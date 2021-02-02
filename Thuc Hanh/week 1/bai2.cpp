#include<iostream>
using namespace std;

typedef struct Fraction
{
	float numerator;
	float denominator;
}fr;


void InputFraction(fr &ps)  // ps is phan so:)))
{
	cout<<"\tEnter Numerator: ", cin>>ps.numerator;
	cout<<"\tEnter Denominator: ", cin>>ps.denominator;
}
void PrintFraction(fr ps)
{
	cout<<ps.numerator<<"/"<<ps.denominator<<endl;
}

typedef struct List
{
	fr *p;
	int n;
}list;

void InputList(list &ls)
{
	for(int i = 0; i<ls.n; i++)
	{
		cout<<"Fraction "<<i<< ": "<<endl;
		InputFraction(ls.p[i]);
		cout<<"-------"<<endl;
	}
}
void PrintList(list ls)
{
	for(int i = 0; i<ls.n; i++)
	{
		PrintFraction(ls.p[i]);
	}
}

// hàm tìm UCLN
int UCLN(int x, int y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}

	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
//rut gon 1 p.so 
void RutGon(fr &x)
{
	int ucln = UCLN(x.numerator, x.denominator);
	x.numerator = x.numerator / ucln;
	x.denominator= x.denominator / ucln;
}

//rut gon 1 mang cac phan so  
void RutGonList(list &ls)
{
	for (int i = 0; i < ls.n; i++)
	{
		RutGon(ls.p[i]);
	}
}

float Comparison(fr first, fr sec) 
{ 
    float a = first.numerator; 
    float b = first.denominator; 
    float c = sec.numerator; 
    float d = sec.denominator; 
  
    // Compute ad-bc 
    float test = a * d - b * c; 
  
    return test;
	// if Y > 0: first > sec 
} 
void Swap(fr &a, fr &b)
{
	fr temp = a;
	a = b;
	b = temp;
}
// Sort up ascending
void SortA(list ls)
{
	for(int i = 0; i<ls.n - 1; i++)
		for(int j = i + 1; j < ls.n; j++)
			 if(Comparison(ls.p[i],ls.p[j]) > 0) Swap(ls.p[i], ls.p[j]);
}

// Descending Sort
void SortD(list ls)
{
	for(int i = 0; i<ls.n - 1; i++)
		for(int j = i + 1; j < ls.n; j++)
			 if(Comparison(ls.p[i],ls.p[j]) < 0) Swap(ls.p[i], ls.p[j]);
}
int main()
{
	list ls;
	ls.p = new fr[ls.n];
	cout<<"Enter the number of elements of array: ", cin>>ls.n;
	InputList(ls);
//	PrintList(ls);
	/*
	cout<<" Sort up ascending:  "<<endl;
	SortA(ls);
	PrintList(ls);
	cout<<"Descending Sort: "<<endl;
	SortD(ls);
	PrintList(ls);*/
	cout<<"============================================"<<endl;
	cout<<" Sort up ascending:  "<<endl;
	RutGonList(ls);
	SortA(ls);
	PrintList(ls);
	cout<<"Descending Sort: "<<endl;
	SortD(ls);
	PrintList(ls);
	return 0;
	
	
}
