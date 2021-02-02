#include"SoNguyenLon.h"



SoNguyenLon SoNguyenLon::NumMax;

SoNguyenLon::SoNguyenLon(int num)
{
	int temp = num;
	int dem = 0;
	while (num >= 10)
	{
		num = num / 10;
		dem++;
	}
	num = temp;
	NumLen = dem + 1;
	for (int i = NumLen - 1; i >= 0; i--)
	{
		StrNum[i] = num % 10 + '0';
		num = num / 10;
	}
	if (NumLen == NumMax.NumLen)
	{
		for (int i = 0; i < NumLen; i++)
		{
			if (StrNum[i] > NumMax.StrNum[i])
				NumMax = *this;
		}
	}
	else if (NumLen > NumMax.NumLen)
	{
		NumMax = *this;
	}

}

SoNguyenLon::SoNguyenLon(int num, int _NumLen)
{
	NumLen = _NumLen;
	for (int i = 0; i < NumLen; i++)
	{
		StrNum[i] = num + '0';
	}
	if (NumLen == NumMax.NumLen)
	{
		for (int i = 0; i < NumLen; i++)
		{
			if (StrNum[i] > NumMax.StrNum[i])
				NumMax = *this;
		}
	}
	else if (NumLen > NumMax.NumLen)
	{
		NumMax = *this;
	}
}

void SoNguyenLon::Xuat()
{
	for (int i = 0; i < NumLen; i++)
		cout << StrNum[i];
	cout<<"\n";
}
SoNguyenLon SoNguyenLon::PhepCong(SoNguyenLon B)
{
	int value = 0;
	int check = 0;
	if (NumLen > B.NumLen)
	{
		value = NumLen - B.NumLen;
		check = 1;
	}
	else
	{
		value = B.NumLen - NumLen;
		check = 2;
	}
	SoNguyenLon k;
	if (check == 1)
	{
		for (int i = 0; i < value; i++)
			k.StrNum[i] = StrNum[i];
		int m = 0;
		for (int i = B.NumLen; i >= 0; i--)
		{
			int C = (StrNum[i + value] - '0') + (B.StrNum[i] - '0') + m;
			if (C > 9)
			{
				m = 1;
				k.StrNum[i + value] = (C - 10 + '0');
			}
			else
			{
				m = 0;
				k.StrNum[i + value] = (C + '0');
			}
		}
		k.NumLen = NumLen;
	}
	else if (check == 2)
	{
		for (int i = 0; i < value; i++)
			k.StrNum[i] = B.StrNum[i];
		int m = 0;
		for (int i = NumLen; i >= 0; i--)
		{
			int C = (B.StrNum[i + value] - '0') + (StrNum[i] - '0') + m;
			if (C > 9)
			{
				m = 1;
				k.StrNum[i + value] = (C - 10 + '0');
			}
			else
			{
				m = 0;
				k.StrNum[i + value] = (C + '0');
			}
		}
		k.NumLen = B.NumLen;
	}
	if (k.NumLen == NumMax.NumLen)
	{
		for (int i = 0; i < NumLen; i++)
		{
			if (k.StrNum[i] > NumMax.StrNum[i])
				NumMax = *this;
		}
	}
	else if (k.NumLen > NumMax.NumLen)
	{
		NumMax = *this;
	}
	return k;
}

SoNguyenLon SoNguyenLon::PhepCong(int Num)
{
	int value = 0;
	int check = 0;
	SoNguyenLon B(Num);
	if (NumLen > B.NumLen)
	{
		value = NumLen - B.NumLen;
		check = 1;
	}
	else
	{
		value = B.NumLen - NumLen;
		check = 2;
	}
	SoNguyenLon k;
	if (check == 1)
	{
		for (int i = 0; i < value; i++)
			k.StrNum[i] = StrNum[i];
		int m = 0;
		for (int i = B.NumLen; i >= 0; i--)
		{
			int C = (StrNum[i + value] - '0') + (B.StrNum[i] - '0') + m;
			if (C > 9)
			{
				m = 1;
				k.StrNum[i + value] = (C - 10 + '0');
			}
			else
			{
				m = 0;
				k.StrNum[i + value] = (C + '0');
			}
		}
		k.NumLen = NumLen;
	}
	else if (check == 2)
	{
		for (int i = 0; i < value; i++)
			k.StrNum[i] = B.StrNum[i];
		int m = 0;
		for (int i = NumLen; i >= 0; i--)
		{
			int C = (B.StrNum[i + value] - '0') + (StrNum[i] - '0') + m;
			if (C > 9)
			{
				m = 1;
				k.StrNum[i + value] = (C - 10 + '0');
			}
			else
			{
				m = 0;
				k.StrNum[i + value] = (C + '0');
			}
		}
		k.NumLen = B.NumLen;
	}
	if (k.NumLen == NumMax.NumLen)
	{
		for (int i = 0; i < NumLen; i++)
		{
			if (k.StrNum[i] > NumMax.StrNum[i])
				NumMax = *this;
		}
	}
	else if (k.NumLen > NumMax.NumLen)
	{
		NumMax = *this;
	}
	return k;
}
SoNguyenLon SoNguyenLon::PhepTru(SoNguyenLon B)
{
	int value = 0;
	int check = 0;
	SoNguyenLon k;
	if (NumLen > B.NumLen)
	{
		value = NumLen - B.NumLen;
		check = 1;
	}
	else
	{
		k.StrNum[0] = '0';
		k.NumLen = 0;
		return k;
	}
	if (check == 1)
	{
		for (int i = 0; i < value; i++)
			k.StrNum[i] = StrNum[i];
		int borrow = 0;
		for (int i = B.NumLen; i >= 0; i--)
		{
			int C = (StrNum[i + value] - '0') - (B.StrNum[i] - '0') - borrow;
			if (C < 0)
			{
				borrow = 1;
				k.StrNum[i + value] = (C + 10 + '0');
			}
			else
			{
				borrow = 0;
				k.StrNum[i + value] = (C + '0');
			}
		}
		k.NumLen = NumLen;
	}
	if (k.NumLen == NumMax.NumLen)
	{
		for (int i = 0; i < NumLen; i++)
		{
			if (k.StrNum[i] > NumMax.StrNum[i])
				NumMax = *this;
		}
	}
	else if (k.NumLen > NumMax.NumLen)
	{
		NumMax = *this;
	}
	return k;
}

SoNguyenLon SoNguyenLon::PhepTru(int Num)
{
	int value = 0;
	int check = 0;
	SoNguyenLon B(Num);
	SoNguyenLon k;
	if (NumLen > B.NumLen)
	{
		value = NumLen - B.NumLen;
		check = 1;
	}
	else
	{
		k.StrNum[0] = '0';
		k.NumLen = 1;
		return k;
	}
	if (check == 1)
	{
		for (int i = 0; i < value; i++)
			k.StrNum[i] = StrNum[i];
		int borrow = 0;
		for (int i = B.NumLen; i >= 0; i--)
		{
			int C = (StrNum[i + value] - '0') - (B.StrNum[i] - '0') - borrow;
			if (C < 0)
			{
				borrow = 1;
				k.StrNum[i + value] = (C + 10 + '0');
			}
			else
			{
				borrow = 0;
				k.StrNum[i + value] = (C + '0');
			}
		}
		k.NumLen = NumLen;
	}
	if (k.NumLen == NumMax.NumLen)
	{
		for (int i = 0; i < NumLen; i++)
		{
			if (k.StrNum[i] > NumMax.StrNum[i])
				NumMax = *this;
		}
	}
	else if (k.NumLen > NumMax.NumLen)
	{
		NumMax = *this;
	}
	return k;
}

SoNguyenLon SoNguyenLon::SNLMax()
{
	return NumMax;
}