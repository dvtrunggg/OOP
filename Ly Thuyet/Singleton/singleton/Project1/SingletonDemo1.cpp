// hello, đây là demo 1 của singleton 
// demo này giúp hiểu rõ hơn về singleton, mình có note lại tác dụng của các dòng rồi á:)

#include<iostream>
using namespace std;

class ConGa
{
private:
	// biến stactic để lưu đối tượng con gà , chứa instance 
	static ConGa* Instance;

	// hàm tạo phải trong private vì nó thể hiện đối tượng duy nhât (chỉ 1 đối tượng dc tạo)
	ConGa();
	~ConGa();
	ConGa(const ConGa&);
	ConGa& operator = (const ConGa&);
public:
	static ConGa* getInstance();

	// nếu khai báo các constructor coppy và operator trong private thì không cần tới 2 dòng này :))) 
	/*ConGa(const ConGa&) = delete;
	ConGa& operator = (const ConGa&) = delete;*/
};
ConGa::ConGa()
{
	cout << " Con ga da dc tao!" << endl;
}
ConGa::~ConGa()
{
	if (Instance)
	{
		Instance = NULL;
	}
	cout << "Con ga da huy" << endl;
}

ConGa* ConGa::Instance = NULL;	// khởi tạo ban đầu cho static

ConGa* ConGa::getInstance()
{
	if (Instance == NULL)
	{
		Instance = new ConGa();	// chỉ tạo duy nhất 1 lần, vì là biến static nên dù gọi lại thì nó cũng != NULL 
	}
	return Instance;
	// khởi tạo biến và lưu vào static 
}

int main()
{
	ConGa* ga1;
	ConGa* ga2;

	ga1 = ConGa::getInstance();
	ga2 = ConGa::getInstance();

	cout << "Dia chi ga1: " << ga1 << endl;
	cout << "Dia chi ga2: " << ga2 << endl;

	return 0;
}
