#include"bai24.h"

void Student::Input()
{
	fflush(stdin);
	cout << "Enter FullName: " << endl;
	getline(cin, FullName);
	cout << "Enter Math Score : " << endl;
	cin >> Math;
	cout << "Enter Literature Score: " << endl;
	cin >> Literature;
}

void Student::Output()
{
	cout << "Name: " << FullName << endl;
	cout << "Math Score: " << Math << endl;
	cout << "Literature Score: " << Literature << endl;
}

string Student::TakeName()
{
	return FullName;
}
float Student::Take_MathScore()
{
	return Math;
}
float Student::Take_LiteratureSocre()
{
	return Literature;
}
void Student::PutIn_Name(string s)
{
	FullName = s;
}
void Student::PutIn_MathScore(float a)
{
	Math = a;
}
void Student::PutIn_LiteratureScore(float a)
{
	Literature = a;
}


float Student::Average()
{
	AverageScore = ((Math + Literature) / 2);
	return AverageScore;
}

void Student::Rank()
{
	if (AverageScore >= 8)
	{
		cout << "Excellent " << endl;
	}
	else // <=8
	{
		if (AverageScore >= 7)
		{
			cout << "Good" << endl;
		}
		else // <=7
		{
			if (AverageScore >= 5)
			{
				cout << "Average" << endl;
			}
			else // < 5
			{
				cout << "Poor" << endl;
			}
		}
	}
}