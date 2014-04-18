#include <iostream>

class Integer {
public:
	//默认构造函数
	Integer() {
		_iptr = new int;	
		*_iptr = 0;
	}
	//显式构造函数
	Integer(const int i) {
		_iptr = new int(i);
	}
	//拷贝构造函数
	Integer(const Integer &i) {
		_iptr = i._iptr;
	}
	//复制运算符
	Integer& operator=(const Integer &i) {
		_iptr = i._iptr;	
		return *this;
	}
	//析构函数
	~Integer() {
		delete _iptr;
	}
private:
	int *_iptr;
};

int main() {


	return 0;
}
