#include<iostream>
using namespace std;


// function template: dùng cho việc mở rộng nhiều kiểu dữ liệu cho hàm
//vd: tìm min(int a[]). nếu truyền vào int thì chỉ có thể thao tác với kiểu int. Còn truyền float, Fraction => lỗi
// khi này, ta dùng function tempate. demo:
// lưu ý: vd với hàm tìm min: a<b? a:b; với kiểu dữ liệu mình định nghĩa ( Fraction) thì phải định nghĩa operator > , nếu ko, máy sẽ ko hiểu đó là cái gì 
// cài function template thì phải viết cùng 1 file(.h hoặc .cpp): ko viết theo kiểu khai báo ở .h rồi viết ở .cpp

template <class T>		// = template <typename T>			// cú pháp dùng func tempplate  
class Array			// array lưu trữ các phân số 
{
private:
	T * danhsach;
	int soluong;
public:
	//Array()
	//{
	//	danhsach = new T[3];		//  3 ptu 
	//}
	void Input()
	{
		cout << "enter soluong:", cin >> soluong;

		danhsach = new T[soluong];
		for (int i = 0; i < soluong; i++)
		{
			cin >> danhsach[i];		// giống hàm nhập bth . phải định nghĩa operator >> nha, ko là lỗi đó
		}
	}
	T layPhanTu(int vitri)
	{
		return danhsach[vitri];
	}




};


