#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
	String() {
		_pstr = new char[10];
	}
	String(const String& copy) {
		_pstr = new char[strlen(copy._pstr) + 1];
		strcpy(_pstr, copy._pstr);
	}
	~String() {
		delete _pstr;
	}
private:
	char *_pstr;
};

int main() {

	return 0;
}
