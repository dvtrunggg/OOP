#include "SoNguyenLon.h"

int main()
{
	SoNguyenLon snl1;
	SoNguyenLon snl2(1234567);
	SoNguyenLon snl3(3, 14);
	SoNguyenLon snl4(9, 20);
	SoNguyenLon snl5 = snl3.PhepTru(snl2);
	SoNguyenLon snl6 = snl2.PhepTru(456675765);
	SoNguyenLon snl7 = snl4.PhepTru(snl3).PhepCong(123456789);
	snl1.Xuat();
	snl2.Xuat();
	snl3.Xuat();
	snl4.Xuat();
	snl5.Xuat();
	snl6.Xuat();
	snl7.Xuat();
	cout << endl << endl;
	cout << "SoNguyenLon Max:" << endl;
	SoNguyenLon::SNLMax().Xuat();
	return 0;
}