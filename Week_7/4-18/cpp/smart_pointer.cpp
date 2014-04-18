//定义智能指针管理类的内部指针

#include <iostream>

using namespace std;

class Smartptr {
	friend class Integer;
private:
	int *_sptr;
	std::size_t _counter;
	Smartptr(int *p):_sptr(p), _counter(1) {}
	~Smartptr() {
		delete _sptr;
	}
};

class Integer {
public:
	//默认构造函数
	//显式构造函数
	//拷贝构造函数
	//复制运算符
	//析构函数
	//debug
	void debug() {
	}
private:
	Smartptr *_iptr;
};

int main() {
	while(1);
	return 0;
}
