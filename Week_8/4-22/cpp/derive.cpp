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

};

int main() {
	A a;
	a.test();
	B b;
	b.num = 1000;
	return 0;
}
