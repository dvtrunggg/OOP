#include "GiaoVien.h"
class GVCN:public GiaoVien
{
private:
	char *m_strLopCN;
public:
	GVCN();
	GVCN(char*, char*);
	GVCN(char*, float, char*);
	GVCN(char*, float, int , char*);

	GVCN(const GVCN &a);
	GVCN& operator = (const GVCN& );

	void Xuat();
	~GVCN();
};
