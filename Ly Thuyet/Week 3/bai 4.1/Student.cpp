#include "Student.h"

Student::Student(string name, float Mscore, float Lscore)
{
	_FullName = name;
	_Mscore = Mscore;
	_Lscore = Lscore;
}

Student::Student(string name, float score)
{
	_FullName = name;
	_Lscore = score;
	_Mscore = 0;
}
Student::Student(const Student& s)
{
	_FullName = s._FullName;
	_Lscore = s._Lscore;
	_Mscore = s._Mscore;
}
void Student::Input()
{
	fflush(stdin);
	cout << " Enter name: ", getline(cin, _FullName);
	cout << " Enter ID: ", getline(cin, _ID);
	cout << " Adress: ", getline(cin, _Address);
	cout << "Enter Math Score: ", cin >> _Mscore;
	cout << "Enter Literature Score: ", cin >> _Mscore;
}
void Student::Output()
{
	cout << _FullName << " , ID: " << _ID << " , Address: " << _Address << ", Math: " << _Mscore << ", Lscore" << _Lscore;
}
string Student::TakeName()
{
	return _FullName;
}
float Student::Take_Mscore()
{
	return _Mscore;
}
float Student::Take_Lscore()
{
	return _Lscore;
}
void Student::PutInName(string name)
{
	_FullName = name;
}

void Student::PutIn_Mscore(float score)
{
	_Mscore = score;
}
void Student::PutIn_Lscore(float score)
{
	_Lscore = score;
}
float Student::AverageScore()
{
	_Ascore = ((_Mscore + _Lscore) / 2);
		return _Ascore;
}
void Student::Rank()
{
	if (_Ascore >= 8) cout << " Exellent\n";
	else if (_Ascore >= 7) cout << " Good\n";
	else if (_Ascore >= 5) cout << " Average\n";
	else cout << " Poor\n";
}