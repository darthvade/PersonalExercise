#include "TextQuery.h"

using namespace std;

void TextQuery::store_file(std::ifstream &is) {
	string textline;
	while(getline(is, textline)) {
		lines_of_text.push_back(textline);
	}
}
