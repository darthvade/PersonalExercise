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

String& String::operator=(const String &s) {
	delete[] this->_str;
	this->_str = new char[s.size() + 1];
	strcpy(_str, s._str);
	return *this;
}

String String::operator+(const String &s) const{
	String tmp;
	tmp._str = new char[this->size() + s.size() + 1];
	strcpy(tmp._str, this->_str);
	strcat(tmp._str, s._str);
	return tmp;
}

std::size_t String::size() const{
	return strlen(this->_str);
}

const char *String::c_str() const {
	return _str;
}
