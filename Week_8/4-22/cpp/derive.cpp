#include <iostream>

using namespace std;

class A {
public:
	void test() {
		num = 999;
		cout << "in Class A " << num << endl;
	}
protected:
	int num;
};

class B : public A {
		A::num = 10000;
};

int main() {
	A a;
	a.test();
	B b;
	b.test();
	return 0;
}
