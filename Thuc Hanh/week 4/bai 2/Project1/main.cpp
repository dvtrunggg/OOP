#include"Time.h"
int main()
{
	ThoiGian tg1;
	ThoiGian tg2(1212);
	ThoiGian tg3(125, 45);
	ThoiGian tg4(12, 239, -78);
	ThoiGian tg5 = tg2 + tg3;
	ThoiGian tg6 = 5000 + tg2;
	ThoiGian tg7 = tg4 - tg6;
	ThoiGian tg8 = 12300 - tg4;
	ThoiGian tg9, tg10;
	if (tg8 <= tg3)
	{
		tg9 = tg1 + tg2 + 36000;
	}
	if (12345 <= tg5)
	{
		tg10 = tg5 + 12345;
	}
	cout << tg1 << endl << tg2 << endl << tg3 << endl << tg4 << endl;
	cout << tg5 << endl << tg6 << endl << tg7 << endl << tg8 << endl;
	cout << tg9 << endl << tg10 << endl;
	system("pause");
	return 0;
}
