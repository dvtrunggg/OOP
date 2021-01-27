#include"Fraction.h"
#include"Array.h"
int main()
{
	/*Fraction ps1, ps2;
	cin >> ps1;
	cout << ps1<<endl;
	cin >> ps2;
	cout << ps2<<endl;
	cout << Fraction::sl;*/	// cú pháp khi dùng static , phải có tên class::
////	ps1 += ps2;
//	ps1 -= ps2;
//	//cout << ps1<<endl;
//	cout << ps2 << endl;
	/*
	cout << "ps1 + ps2:" << ps1 + ps2 << endl;
	cout << "ps1 - ps2:" << ps1 - ps2 << endl;
	cout << "ps1 * ps2:" << ps1 * ps2 << endl;
	cout << "ps1 / ps2:" << ps1 / ps2 << endl;*/
	/*float a = ps1;
	cout << "a=" << a << endl;
	int b = ps2;
	cout << "b=" << b << endl;*/
	/*if (ps1 >= ps2)
		cout <<  "dung";
	else
		cout <<  "sai";*/


//=================================================================================//
	Array <int> arr;
	//Array <Fraction> arr;
	arr.Input();
	cout<<arr.layPhanTu(0);
	return 0;

}