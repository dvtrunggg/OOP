#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
typedef struct Student
{
	string FullName;
	string ID;
	float AverageScore;
}st;

void InputStudent(st &sv)
{
	fflush(stdin);
	cout<<"Enter student's name: ";
	getline(cin,sv.FullName);
	cout<<"Enter student ID: ", getline(cin,sv.ID);
	cout<<"Enter student's average score: ", cin>>sv.AverageScore;
}
void PrintStudent(st sv)
{
	cout<<sv.FullName<<"  ("<<sv.ID<<")\t "<<sv.AverageScore;
}
void InputList(st ls[], int n)
{
	for(int i = 0; i<n; i++)
	{
		InputStudent(ls[i]);
		
	}
}
void PrintList(st ls[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<endl;
		PrintStudent(ls[i]);
	}
}
void Swap(st &a, st &b)
{
	st temp = a;
	a = b;
	b = temp;
}
void ShowStudent(st sv) // for question 3c
{
	cout<<"  ("<<sv.ID<<")\t "<< sv.FullName<<"\t"<<sv.AverageScore;
}
void ShowList(st ds[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<endl;
		ShowStudent(ds[i]);
	}
}
void SortScore(st ds[], int n)     // n is the numbers of student in class
{
	for(int i = 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(ds[i].AverageScore < ds[j].AverageScore) Swap(ds[i], ds[j]); 
}

void SortName(st ds[], int n)
{
	for(int i = 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(ds[i].FullName > ds[j].FullName) Swap(ds[i], ds[j]); 
}
void SortID(st ds[], int n)
{
	for(int i = 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(ds[i].ID > ds[j].ID) Swap(ds[i], ds[j]); 
}
int main()
{
	st sv[50];
	int n;
	cout<<"Enter the number of student in class: ", cin>>n;
	InputList(sv,n);
	cout<<"Here is your class: "<<endl;
	PrintList(sv,n);
	cout<<"\n\n==================================="<<endl;
//	cout<<"Score sort ascending: "<<endl;
//	SortScore(sv,n);
//	cout<<"Name Sort:"<<endl;
//	SortName(sv,n);
	cout<<"ID sort: ";
	SortID(sv,n);
	ShowList(sv,n);
	return 0;
}
