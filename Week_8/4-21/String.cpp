#include "String.h"

String::String() : _str(new char[1]){
	*_str = '\0';
}

String::String(const char *s) {
	_str = new char[strlen(s) + 1];	
	strcpy(_str, s);
}

String::String(const String& s) {
	_str = new char[s.size() + 1];
	strcpy(_str, s._str);
}

String::~String() {
	delete[] _str;
}
