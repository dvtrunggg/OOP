#pragma once
#include<iostream>
using namespace std;

//static - thành phần tĩnh: dùng chung cho cả lớp ( thuộc tình + phương thức,... - private, public,...)
// khai báo trong private 
// static ko thể truy cập đến các thuộc tính và phương thức ko STATIC vd: static sl ( ko gán dc cho Num, Deno )
// các phương thức non-static có thể truy cập và sử dụng static của class
// BẮT BUỘC phải khởi tạo giá trị ban đầu cho static ( sl = 0)

class Fraction
{
private:
	int Num;  // numerator
	int Deno;  // denominator
	 
public:
	static int sl;   // số lượng
	Fraction();          // constructor default
	Fraction(int tu, int mau);     // constructor with parameters 
	Fraction(Fraction const& ps);    //constructor copy 

	Fraction operator + (const Fraction& ps);  
	// chỉ truyền vào 1 ps do khi ta cộng 2 ps: ps1 + ps2 
	//ps1 là trong class, ps2 là truyền từ hàm  nên chỉ truyền vào ps thôi, ko cần const Fraction& ps1, const Fraction& ps2 
	//Fraction operator - (const Fraction& ps);
	Fraction operator - (const Fraction& ps);
	Fraction operator * (const Fraction& ps);
	Fraction operator / (const Fraction& ps);
	Fraction &operator = (const Fraction& rps);  //toán tử gán ;rps là địa chỉ biến 
	// thực tế, đối với các class có kiểu dữ liệu cơ bản trình biên dịch đã định nghĩa toán tử này sẵn để gán => ko cần làm cũng dc 
	// làm toán tử = để làm += và -=,....
	Fraction &operator += (const Fraction& ps);  //cách 1
	friend Fraction &operator -=(Fraction& a, const Fraction& b);  //cách 2: dùng friend
	//Fraction operator -= (const Fraction& ps);
	//================================================================
	
	// tóan tử so sánh:
	// dùng int ( trả về 0,1)
	
	bool operator>=( Fraction& ps);
	bool operator>( Fraction& ps);

	// ps++ và ++ps
	Fraction operator ++();			//	++ps
	Fraction operator ++(int notUse);  // notUse vì để phân biệt giữa ps++ và ++ps ( this is ps++)
	
	//ép kiểu:
	operator float() const;      // operator + kiểu dữ liệu cần ép () + const ( kiểu trả về mà ko dc gán)
	operator int() const;

	// toán tử nhập xuất ( use frend function) : do là hàm ngoài lớp 
	friend ostream& operator <<(ostream& os, const Fraction& ps);  // hàm xuất ( cout<<)  const Fraction& ps do ko muốn thay đổi giá trị, chỉ xuất ra thôi 
	friend istream& operator >> (istream& is, Fraction& ps); // hàm nhập ( cin>>) Fraction& ps do nhập phân số => thay đổi giá trị  

};

//// hàm frend: ko phải hàm thành viên của lớp 
//dc định nghĩa như hàm bth, truy suất dc các thành viên riêng of class đó
// ko dùng dc toán tử truy xuất thành viên ( ., ->), ko dùng dc con trỏ this 
//ko ưu tiên viết các toán tử thuộc lớp ( operator +,-,...)
// ưu tiên viết các toán tử ngoài lớp: >>, << ( nhập xuất : cin, cout)

