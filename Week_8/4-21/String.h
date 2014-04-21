#ifndef __STRING_H__
#define __STRING_H__

class String {
public:
	String();
	String(const char *);
	String(const String&);

private:
	char *_str;
};


#endif
