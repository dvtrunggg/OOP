#include"CoMay.h"
#include"ChiTietDon.h"
#include"ChiTietPhuc.h"
int main()
{
	CoMay* pcm = new CoMay();
	pcm->ThemChiTietMay(new ChiTietDon("CTD001", 120, 350000));

	ChiTietMay* pctm = new ChiTietPhuc("CTP001");
	((ChiTietPhuc*)pctm)->ThemChiTiet(new ChiTietDon("CTD002", 50, 1280000));
	((ChiTietPhuc*)pctm)->ThemChiTiet(new ChiTietDon("CTD003", 20, 10000));

	ChiTietMay* pctm1 = new ChiTietPhuc("CTP002");
	((ChiTietPhuc*)pctm1)->ThemChiTiet(new ChiTietDon("CTD004", 80, 170000));

	((ChiTietPhuc*)pctm)->ThemChiTiet(pctm1);

	pcm->ThemChiTietMay(pctm);
	pcm->ThemChiTietMay(new ChiTietDon("CTD005", 210, 2350000));
	pcm->ThemChiTietMay(new ChiTietDon("CTD006", 40, 50000));

	cout << "Thong tin co may: " << endl << *pcm << endl;
	cout << "Trong luong: " << pcm->TrongLuong() << endl;
	cout << "Gia thanh: " << fixed << setprecision(2) << pcm->GiaThanh() << endl;

	system("pause");
	return 0;
}