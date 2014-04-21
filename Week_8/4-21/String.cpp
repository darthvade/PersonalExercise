#include "String.h"

String::String() : _str(new char[1]){
	*_str[0] = '\0';
}
