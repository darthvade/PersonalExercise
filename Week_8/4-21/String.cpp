#include "String.h"

String::String() : _str(new char[1]){
	*_str = '\0';
}

String::String(const char *s) {
	_str = new char[strlen(s) + 1];	
}
