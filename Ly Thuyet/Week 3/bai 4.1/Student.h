#include<iostream>
#include <string>
#include<vector>
using namespace std;
class Student
{
	string _FullName;
	string _ID;
	string _Address;
	float _Mscore, _Lscore, _Ascore;
public:
	Student()
	{
		_FullName = "";    // why _FullName = NULL is wrong??
		_Mscore = _Lscore = 0;
	}
	Student(string name, float Mscore, float Lscore);
	Student(string name, float score);
	Student(const Student& s);

	void Input();
	void Output();
	string TakeName();
	float Take_Mscore();
	float Take_Lscore();
	void PutInName(string name);
	void PutIn_Mscore(float score);
	void PutIn_Lscore(float score);
	float AverageScore();
	void Rank();


};

