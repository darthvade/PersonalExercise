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

int main() {

	Noncopyable a;
	return 0;
}
