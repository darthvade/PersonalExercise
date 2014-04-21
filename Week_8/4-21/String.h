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
	bool operator==(const String &) const;
	std::size_t size() const;
	const char * c_str() const;
	void debug() const;

	friend bool operator<(const String &, const String &);
	friend bool operator>(const String &, const String &);
	friend bool operator<=(const String &, const String &);
	friend bool operator>=(const String &, const String &);

	friend std::iostream& operator<<(std::iostream &, const String &);
private:
	char *_str;
};

inline bool operator>(const String &a, const String &b) {
	return 	(strcmp(a._str, b._str) > 0 ) ? true : false ; 
}

inline bool operator<(const String &a, const String &b) {
	return 	(strcmp(a._str, b._str) < 0 ) ? true : false ; 
}

inline bool operator>=(const String &a, const String &b) {
	return !(a < b);
}

inline bool operator<=(const String &a, const String &b) {
	return !(a > b);
}

inline std::iostream& operator<<(std::iostream &, const String &) {
	
}
#endif
