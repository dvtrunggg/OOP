#include"SoPhuc.h"

int main()
{
	SoPhuc sp1(4,5);
	SoPhuc sp2(1, 2);
	if (sp1 >= sp2)
		cout << "true"<<endl;
	else
		cout << "false"<<endl;
	cout << sp1 + sp2<<endl;
	cout << sp1 - sp2 << endl;
	cout << sp1 * sp2 << endl;
	SoPhuc sp3 = sp1 / sp2;
	cout <<  sp3 << endl;
	return 0;
}