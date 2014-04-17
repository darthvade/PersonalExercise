#ifndef __TEXTQUERY_H__
#define __TEXTQUERY_H__

#include <vector>
#include <set>
#include <string>
#include <map>

class TextQuery {
public:
	typedef std::vector<std::string>::size_type line_no;
	void read_file(std::string &is) {
		store_file(is);
		build_map();
	}
};


#endif
