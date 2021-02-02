#pragma once
#include"Data.h"
class Folder : public Data
{
private:
	vector<Data*> DS_Data;
	int SoFile;
	int SoFolder;
	int Cap;
public:
	Folder(string Ten)
	{
		this->Ten = Ten;
		this->SoFile = 0;
		this->SoFolder = 0;
		this->Cap = 0;
	}

	void CapNhatCap(int Cap)
	{
		this->Cap = Cap + 1;
		for (int i = 0; i < this->DS_Data.size(); i++)
			if (strcmp(typeid(*DS_Data[i]).name(), "class Folder") == 0)
				((Folder*)DS_Data[i])->CapNhatCap(this->Cap);
	}

	void Them(Data* data)
	{
		if (data != NULL)
		{
			DS_Data.push_back(data);
			if (strcmp(typeid(*data).name(), "class File") == 0)
			{
				++SoFile;
			}
			else
			{
				++SoFolder;
				SoFolder += ((Folder*)data)->SoFolder;
				SoFile += ((Folder*)data)->SoFile;
				((Folder*)data)->CapNhatCap(this->Cap);
			}
		}
	}

	~Folder()
	{
		for (int i = 0; i < this->DS_Data.size(); ++i)
			delete DS_Data[i];
	}

	void Xuat()
	{
		string space;
		for (int i = 0; i < this->Cap + 1; ++i)
			space += "   ";

		cout << "[" << this->Ten << "]" << endl;

		for (int i = 0; i < this->DS_Data.size(); ++i)
		{
			if (strcmp(typeid(*DS_Data[i]).name(), "class File") == 0)
			{
				cout << space;
				DS_Data[i]->Xuat();
				cout << endl;
			}
			else
			{
				cout << space;
				DS_Data[i]->Xuat();
			}
		}
	}

	int SoLuongFolder()
	{
		return this->SoFolder;
	}

	int SoLuongFile()
	{
		return this->SoFile;
	}

	double getSize()
	{
		double sum = 0;

		for (int i = 0; i < this->DS_Data.size(); i++)
			sum += DS_Data[i]->getSize();

		return sum;
	}

	Folder* TimFolder(string ten)
	{
		if (this->Ten == ten)
			return this;

		for (int i = 0; i < this->DS_Data.size(); ++i)
		{
			if (strcmp(typeid(*DS_Data[i]).name(), "class Folder") == 0)
			{
				if (((Folder*)DS_Data[i])->Ten == ten)
					return ((Folder*)DS_Data[i]);
				else
				{
					((Folder*)DS_Data[i])->TimFolder(ten);
				}
			}
		}

		return NULL;
	}

	double getSizeFolder(string ten)
	{
		Folder* tm = this->TimFolder(ten);
		if (tm != NULL)
			return tm->getSize();
		return 0;
	}
};
