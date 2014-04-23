#include <iostream>

using namespace std;

class Noncopyable {
protected:
	Noncopyable(){};
	~Noncopyable(){};
private:
	Noncopyable(const Noncopyable&);
	Noncopyable& operator=(const Noncopyable&);
};

class Base : public Noncopyable {};

int main() {
	Base b;
	return 0;
}
