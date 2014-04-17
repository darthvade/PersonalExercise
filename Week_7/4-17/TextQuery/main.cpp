#include "TextQuery.h"
#include <ifstream>

int main() {
	ifstream infile;
	if(argc < 2 || !open_file(infile, argv[1])) {
		cerr << "" << endl;
	}
}
