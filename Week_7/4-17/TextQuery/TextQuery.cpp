#include "TextQuery.h"

void TextQuery::store_file(std::ifstream &is) {
	string textline;
	while(is >> textline) {
		lines_of_text.push_back(textline);
	}
}
