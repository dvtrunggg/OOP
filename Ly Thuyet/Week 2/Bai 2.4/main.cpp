#include"bai24.h"

int main()
{
	Student a;
	string s;
	float a1, b1;
	a.Input();
	a.Output();
	/*cout << "\nName " << a.TakeName() << endl;
	cout << "Math Score: " << a.Take_MathScore() << endl;
	cout << "Literature Score: " << a.Take_LiteratureSocre() << endl;*/

	cout << "\nName of student you want to put in: \n";
	fflush(stdin);
	getline(cin, s);
	a.PutIn_Name(s);
	cout << "Enter Math Score: ";
	cin >> a1;
	cout << "Enter Literature Score : ";
	cin >> b1;
	a.PutIn_MathScore(a1);
	a.PutIn_LiteratureScore(b1);
	a.Output();

	a.Average();
	cout << " Rank: ";
	a.Rank();


	return 0;
}