#ifndef __STRING_H__
#define __STRING_H__

class String {
public:
	String();
	String(const char *);
	String(const String&);
	~String();
	String& operator=(const String &);
	String operator+(const String &);
	void debug();
private:
	char *_str;
};


#endif
