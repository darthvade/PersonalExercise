#include "String.h"

int main() {
	String s1;
	String s2("hello");
	String s3("world");
	s1 = s2 + s3;
	s1.debug();
	return 0;
}
