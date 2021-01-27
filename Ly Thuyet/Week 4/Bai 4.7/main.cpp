#include"bai47.h"

int main()
{
	CArray a;
	cin >> a;
	cout << endl;
	cout << a<<endl;
	a.SortA();
	cout << a;
	/*CArray a;
	a.Input();
	a.Output();*/
	/*cout << "\nSize of Array: \n" << a.ArraySize()<<" bytes  "<< endl;

	int x;
	cout << "\nEnter position of element you want to get  \n";
	cin >> x;
	cout << "element you want to take : " << a.GetElement(x) << endl;
	if (a.Search(5))
	{
		cout << "\n5 is exist \n";
	}
	else
	{
		cout << "\n is not exist \n";
	}

	a.SortA();
	cout << "\nSort ascending : \n";
	a.Output();

	a.SortD();
	cout << "\nSort descending: \n";
	a.Output();*/
	return 0;
}