/**
* C++基础语法练习
*/
#include<iostream>
using namespace std;
class A {
	public:
		A():i(0) {
			cout << "A::A()" << endl;
		}
		~A() {
			cout << "A::~A()" << endl;
		}
		void print() {
			cout << "A--->i = " << i << endl;
		}
	protected:
		void set(int n) {
			i = n;
		}
	private:
		 int i;
};
class B : public A {
	public:
		void f() {
			set(9999);
			print();
		}
};
int main() {
	B b;
	b.f();
	return 0;
}
