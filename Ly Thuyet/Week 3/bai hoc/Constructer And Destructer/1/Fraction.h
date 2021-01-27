#include<iostream>
using namespace std;
class Fraction
{
private:
	int num;     // numerator - tử số
	int deno;		// denomirator - mẫu số 
public:
	// Constructor:
	Fraction();        // this is constructor default - hàm dựng mặc định ( giống hàm khởi tạo)

	Fraction(const Fraction &ps); // constructor copy - hàm dựng sao chép
	// truyền tham chiếu để ko bị lặp vô tận khi truyền dữ liệu, lấy giá trị từ địa chỉ chứ ko phải gán giá trị trong main()
	// const để ko bị thay đổi giá trị khi truyền tham chiếu.

	Fraction(const int tu , const int smau);  // constructor with parameters - hàm dựng với tham số đầu vào
	Fraction(const int tu);      // thêm 1 vd nữa:): hàm dựng với tham số đầu vào là tu  

	~Fraction();   // hàm hủy: đối với kiểu int, int, char, string,... thì ko cần hủy. Nếu viết có thể code hàm rỗng.
	// các kiểu con trỏ, hàm char* : phải hủy: vd: tại private có char* _hoten. Hàm hủy: delete _hoten; _hoten = NULL.
	// bao nhieu thuộc tính cần hủy thì bấy nhiêu lệnh delete.
	
	void Print(); // ko có hàm Input do đã có hàm dựng
};

