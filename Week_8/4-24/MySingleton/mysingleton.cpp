#include <iostream>

using namespace std;

class Base {
public:
	static Base& Instanc() {
		static Base single;
		return single;
	}
	void print() {
		cout << "Singleton!" << endl;	
	}
private:
	Base();
	Base(const Base &);
	Base& operator=(const Base&);
	~Base();
};

int main() {
	Base::Instanc().print();
	return 0;
}
