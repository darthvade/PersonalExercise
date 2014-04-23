#include <iostream>

using namespace std;

class Base {
public:
	void test1(){};
	static void test2(){};
	void test3(){};
	void debug() {
		cout << "a: " << &a << endl;
		cout << "b: " << &b << endl;
		cout << "test1: " << &Base::test1 << endl;
		cout << "test2: " << &Base::test2 << endl;
		cout << "test3: " << &Base::test3 << endl;
	}
private:
	int a;
	int b;
};

int main() {
	Base a;
	a.debug();
	return 0;
}
