#include "Student.h"
int main()
{
	vector<Student> st;
	int n;
	cout << "Enter the numbers of student:", cin >>n;
	for(int i = 0; i<n; i++)
		st[i].Input();
	return 0;
}
