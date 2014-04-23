#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Base {
public:
	void test1(){};
	static void test2(){};
	void test3(){};
	void debug() {
		char buf[32];
		cout << "a: " << &a << endl;
		cout << "b: " << &b << endl;
		sprintf(buf, "%u", &Base::test1);
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
