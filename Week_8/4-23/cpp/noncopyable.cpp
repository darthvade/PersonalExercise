#include <iostream>

using namespace std;

class Noncopyable {
protected:
	Noncopyable(){};
	~Noncopyable(){};
private:
	Noncopyable(const Noncopyable&) {};
	Noncopyable& operator=(const Noncopyable&) { return *this};
};

int main() {

	return 0;
}
