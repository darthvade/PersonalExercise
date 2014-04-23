#include <iostream>

using namespace std;

class Base {
public:
	Base(int a) : _in_base(a) {
		cout << "Base constractor!" << endl;
	}
	~Base() {
		cout << "Base destractor!" << endl;
	}
	virtual void test() {
		cout << "Base test()" << endl;	
	}
private:
	int _in_base;
};

class Child : public Base {
public:
	Child(int base, int child) : Base(base), _in_child(child) {
		cout << "Child constractor!" << endl;
	}
	~Child() {
		cout << "Child destractor!" << endl;
	}
	void test() {
		cout << "Child test()" << endl;	
	}
private:
	int _in_child;
};


int main() {
	Child d;
	d.test();
	Base &p = d;
	p.test();
	return 0;
}
