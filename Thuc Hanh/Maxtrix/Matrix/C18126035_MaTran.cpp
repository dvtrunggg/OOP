//// 18126035 - Dinh Viet Trung
//Created by April 23rd, 2020

#include "C18126035_MaTran.h"

C18126035_MaTran::C18126035_MaTran() {
    n = 1;
    m = 1;
    a[n][m] = 1;
}

C18126035_MaTran::C18126035_MaTran(const int a[][MAX], const int& n, const int& m) {
    this->n = n;
    this->m = m;
    this->a[this->n][this->m] = a[n][m];
}

C18126035_MaTran::C18126035_MaTran(const int& n, const int& m) {
    this->n = n;
    this->m = m;
    for (int i = 0; i < this->n; i++) {
        for (int j = 0; j < this->m; j++) {
            cout << "Value = ";
            cin >> this->a[i][j];
        }
    }
}

C18126035_MaTran::C18126035_MaTran(const C18126035_MaTran& mt) {
    this->n = mt.n;
    this->m = mt.m;
    this->a[n][m] = mt.a[mt.n][mt.m];
}
C18126035_MaTran::~C18126035_MaTran() 
{
    cout << "da huy" << endl;
}

void C18126035_MaTran::MatrixChange(int a[][MAX], const int& n, const int& m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
}


ostream& operator << (ostream& os, const C18126035_MaTran& mt) {
    os << "Ma tran: " << endl;
    for (int i = 0; i < mt.n; i++) {
        for (int j = 0; j < mt.m; j++) {
            os << mt.a[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

istream& operator >> (istream& is, C18126035_MaTran& mt) 
{
    
    for (int i = 0; i < mt.n; i++) {
        for (int j = 0; j < mt.m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            is >> mt.a[i][j];
        }
    }
    return is;
}
void C18126035_MaTran::Nhap()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void C18126035_MaTran::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "] = "<<a[i][j];
		}
	}
}
int C18126035_MaTran::layDong()
{
	return n;
}
int C18126035_MaTran::layCot()
{
	return m;
}
void C18126035_MaTran::ganCot(int c)
{
	this->m = c;
}
void C18126035_MaTran::ganDong(int d)
{
	this->n = d;
}
int C18126035_MaTran::layGiaTri(const int a[][MAX], int i, int j) 
{
    int value = a[i][j];
    return value;
}
void C18126035_MaTran::InputValue(int a[][MAX], int i, int j)
{
    int value;
    cout << "Nhap gia tri: ";
    cin >> value;
    a[i][j] = value;
}
bool C18126035_MaTran::CheckMatrix(const int a[][MAX], int i, int j)
{
    if (i == j)
        return true;
    return false;
}
int C18126035_MaTran::CheckIsUnit(const int a[][MAX], int n, int m)
{
    int check;
    if (n == m) {
        for (int i = 0; i < n; i++) {
            check = 0;
            for (int j = 0; j < m; j++)
                if (a[i][j] == 1)
                    check = 1;
        }
    }
    if (check == 1)
        return n;
    else return -1;
}

int C18126035_MaTran::CheckMatrixSym(const int a[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] != a[j][i])
                return 0;
    return 1;
}