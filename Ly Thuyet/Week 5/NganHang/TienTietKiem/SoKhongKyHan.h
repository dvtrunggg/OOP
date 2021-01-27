#include<iostream>
#include<string>
#include<time.h >
#include <stdlib.h>
#include "CDate.h"

using namespace std;


class SoKhongKyHan
{
private:
	string CMND;
	string Name;
	int tienGui;
	float laiSuat;
	int kyHan;
	CDate ngayLap;
public:
	SoKhongKyHan();
	SoKhongKyHan(string c, string n, int gui, float lai, int k, CDate nglap);
	void Input();
	void Output();
	float tienLai();
};