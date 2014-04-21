#ifndef __STRING_H__
#define __STRING_H__

#include <cstddef>
#include <cstring>

class String {
public:
	String();
	String(const char *);
	String(const String&);
	~String();
	String& operator=(const String &);
	String operator+(const String &);
	std::size_t size();
	void debug();
private:
	char *_str;
};


#endif
