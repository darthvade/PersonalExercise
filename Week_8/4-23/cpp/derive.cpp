#include <iostream>

using namespace std;

class Base {
public:
	Base() {
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
	Child() {
		cout << "Child constractor!" << endl;
	}
	~Child() {
		cout << "Child destractor!" << endl;
	}
	void test() {
		cout << "Child test()" << endl;	
	}

};


int main() {
	Child d;
	d.test();
	Base &p = d;
	p.test();
	return 0;
}
