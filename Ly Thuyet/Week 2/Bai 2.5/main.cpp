#include"bai25.h"

int main()
{
	Array a;
	a.Input();
	a.Output();

	cout << "\nSize of Array: \n" << a.ArraySize()<<" bytes  "<< endl;

	int x;
	cout << "\nEnter position of element you want to take  \n";
	cin >> x;
	cout << "element you want to take : " << a.TakeElement(x) << endl;



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
	a.Output();
	return 0;
}