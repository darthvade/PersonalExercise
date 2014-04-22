#include <iostream>

using namespace std;

class A {
public:
	A(int a) : num(a){};
	void test() {
		cout << "in Class A " << num << endl;
	}
private:
	int num;
};

class B : public A {

};

int main() {
	A a(99);
	a.test();
	return 0;
}
