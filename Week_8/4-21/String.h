#ifndef __STRING_H__
#define __STRING_H__

#include <cstddef>
#include <cstring>
#include <iostream>

class String {
public:
	String();
	String(const char *);
	String(const String&);
	~String();
	String& operator=(const String &);
	String operator+(const String &) const;
	std::size_t size() const;
	const char * c_str() const;
	void debug() const;
private:
	char *_str;
};


#endif
