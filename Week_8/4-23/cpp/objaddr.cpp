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
		cout << "test1: " << &this->test1 << endl;
	}
private:
	int a;
	int b;
};

int main() {

	return 0;
}
