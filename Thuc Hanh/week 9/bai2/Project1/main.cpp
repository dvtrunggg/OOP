#include"Folder.h"
#include"File.h"
int main()
{
	Folder* tm_BaiTapC = new Folder("Bai tap C");
	tm_BaiTapC->Them(new File("BT2.cpp", 1.280));

	Folder* tm_BaiTap = new Folder("Bai tap");
	tm_BaiTap->Them(new File("BT1.doc", 123.456));
	tm_BaiTap->Them(tm_BaiTapC);
	tm_BaiTap->Them(new File("BT2.xls", 23.456));

	Folder* tm_LyThuyet = new Folder("Ly thuyet");
	tm_LyThuyet->Them(new File("Ch1.ppt", 34567));

	Folder* tm_C = new Folder("C:");
	tm_C->Them(tm_BaiTap);
	tm_C->Them(tm_LyThuyet);

	tm_C->Xuat();
	cout << endl;

	cout << "So thu muc: " << tm_C->SoLuongFolder() << endl;
	cout << "So tep tin: " << tm_C->SoLuongFile() << endl;

	string tenFolder;
	cout << "Nhap ten thu muc: ";
	getline(cin, tenFolder);
	cout << "Kich thuoc thu muc [" << tenFolder << "]: " << tm_C->getSizeFolder(tenFolder) << " B" << endl;

	return 0;
}