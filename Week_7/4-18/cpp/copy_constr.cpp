#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
	String() {
		_pstr = new char[10];
	}
	String(const String& copy) {
		_pstr = new char[strlen(copy) + 1];
		strcpy(_pstr, copy);
	}
private:
	char *_pstr;
};

int main() {

	return 0;
}
