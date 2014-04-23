#include <cstdio>
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
		printf("%u\n", &Base::test1);
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
