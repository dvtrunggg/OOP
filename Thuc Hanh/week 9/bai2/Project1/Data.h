#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Data
{
protected:
	string Ten;
public:
	virtual void Xuat() = 0;
	virtual double getSize() = 0;
};
