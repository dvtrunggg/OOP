# include"bai23.h"


void DonThuc::Input()
{
	cout << "Nhap he so cua don thuc: ";
	cin >> HeSo;
	cout << "Nhap bac cua don thuc: ";
	cin >> Bac;
}

void DonThuc::Output()
{
	cout << "don thuc co dang: ";
	if (Bac == 1)
	{
		cout << HeSo << "*x" << endl;
	}
	else
	{
		cout << HeSo << " * x^" << Bac << endl;
	}
}

float DonThuc::LayHeSo()
{
	return HeSo;
}
float DonThuc::LayMu()
{
	return Bac;
}
void DonThuc::GanHeSo(float a)
{
	HeSo = a;
}
void DonThuc::GanBac(float a)
{
	Bac = a;
}
float DonThuc::TinhGiaTriDonThuc(int x)
{
	return HeSo * pow(x, Bac);
}

DonThuc DonThuc::DaoHam()
{
	DonThuc b;
	b.HeSo = HeSo * Bac;
	b.Bac = Bac - 1;
	return b;
}

DonThuc DonThuc::NguyenHam()
{
	DonThuc b;
	b.HeSo = HeSo / (Bac + 1);
	b.Bac = Bac + 1;
	return b;
}

DonThuc DonThuc::Tong(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo + b.HeSo;
	c.Bac = Bac;
	return c;
}

DonThuc DonThuc::Hieu(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo - b.HeSo;
	c.Bac = Bac;
	return c;
}

DonThuc DonThuc::Tich(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo - b.HeSo;
	c.Bac = Bac + b.Bac;
	return c;
}

DonThuc DonThuc::Thuong(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo / b.HeSo;
	c.Bac = Bac - b.Bac;
	return c;
}