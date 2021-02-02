//Dinh Viet Trung - 18126035 
#include "BuuDien.h"
BuuDien::BuuDien()
{
	Thu a;
	th.push_back(a);	
	HangHoa b;
	h.push_back(b);
}
void BuuDien::Nhap()
{
	int n, m;
	cout << "=====Nhap Thu: =====" << endl;
	cout << "Nhap so luong thu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		th[i].Nhap();
	}
	cout << "========Nhap Hang Hoa: =======" << endl;
	cout << "Nhap so luong hang hoa: ";
	cin >> m;
	for (int j = 0; j < m; j++)
	{
		h[j].Nhap();
	}
}
void BuuDien::Xuat()
{
	cout << "=====Xuat Thu: =====" << endl;
	for (int i = 0; i < th.size(); i++)
	{
		th[i].Xuat();
	}
	cout << "========Xuat Hang Hoa: =======" << endl;
	for (int j = 0; j < h.size(); j++)
	{
		h[j].Xuat();
	}
}
int BuuDien::TongChiPhi()
{
	int sum = 0;
	for (int i = 0; i < th.size(); i++)
	{
		sum += th[i].phiVanChuyen();
	}
	for (int j = 0; j < h.size(); j++)
	{
		sum += h[j].PhiVanChuyen();
	}
	return sum;
}
