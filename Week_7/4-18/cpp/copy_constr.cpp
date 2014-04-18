#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
	String() {
		_pstr = new char[10];
	}
	String(const char *copy) {
		_pstr = new char[strlen(copy) + 1];
		strcpy(_pstr, copy);
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
	String s("");
	return 0;
}
