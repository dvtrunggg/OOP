// 18126035 - Dinh Viet Trung
//Created by April 23rd, 2020

#pragma once
#include<iostream>
#include <cassert>
using namespace std;
#define MAX 1000
class C18126035_MaTran
{
private:
	int a[MAX][MAX];
	int n;	// dong
	int m;	// cot
public:
    C18126035_MaTran();
    C18126035_MaTran(const int a[][MAX], const int& n, const int& m);
    C18126035_MaTran(const C18126035_MaTran& Matran);
    C18126035_MaTran(const int& n, const int& m);
    ~C18126035_MaTran();

    void Nhap();

    void Xuat();
    int layDong();
    int layCot();
    void ganDong(int);
    void ganCot(int);
    friend ostream& operator << (ostream& os, const C18126035_MaTran& Matran);
    friend istream& operator >> (istream& is, C18126035_MaTran& Matran);
    void MatrixChange(int a[][MAX], const int& n, const int& m);

    int layGiaTri(const int a[][MAX], int, int);

    void InputValue(int a[][MAX], int, int);
    bool CheckMatrix(const int a[][MAX], int, int);
    int CheckIsUnit(const int a[][MAX], int , int );
    int CheckMatrixSym(const int a[][MAX], int, int);
    
   


};

