//定义智能指针管理类的内部指针

#include <iostream>

using namespace std;

class Smartptr {
	friend class Integer;
private:
	Smartptr(int *p):_iptr(p), _counter(1) {}
	~Smartptr() {
		delete _iptr;
	}
	int *_iptr;
	std::size_t _counter;
};

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
	//debug
	void debug() {
		cout << *_iptr << endl;
	}
private:
	int *_iptr;
};

int main() {
	Integer i1;
	i1.debug();
	Integer i2(99);
	i2.debug();
	i1 = i2;
	i1.debug();
	while(1);
	return 0;
}
