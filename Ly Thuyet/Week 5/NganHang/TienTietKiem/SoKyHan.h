#include<iostream>
#include<string>
#include<time.h >
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
#include"CDate.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


class SoKyHan
{
private:
	string CMND;
	string Name;
	int tienGui;
	float laiSuat;
	int kyHan;
	CDate ngayLap;
public:
	SoKyHan();
	SoKyHan(string c, string n, int gui, float lai, int k, CDate nglap);
	void Input();
	void Output();
	float tienLai();
};


