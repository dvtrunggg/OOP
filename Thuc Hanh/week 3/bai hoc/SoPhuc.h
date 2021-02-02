#pragma once
class SoPhuc
{
	int thuc, ao;
	int sl;
	static int ssl;
public:
	SoPhuc();
	SoPhuc(const int& thuc, const int& ao);
	Sophuc(const SoPhuc& sp);
	~SoPhuc();
	SoPhuc operator + (const SoPhuc& sp);
	int SoLuongSP();
	static int SSoLuongSP();
};

