#include <iostream>
using namespace std;
#include <string>
class Student
{
	string FullName;
	float Math, Literature;
	float AverageScore;
public:
	void Input();
	void Output();
	string TakeName();
	float Take_MathScore();
	float Take_LiteratureSocre();
	void PutIn_Name(string s);
	void PutIn_MathScore(float a);
	void PutIn_LiteratureScore(float a);
	float Average();
	void Rank();
};
