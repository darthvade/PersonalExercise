#include "TextQuery.h"
#include <fstream>

using namespace std;

int main() {
	ifstream infile;
	if(argc < 2 || !open_file(infile, argv[1])) {
		cerr << "No input file!" << endl;
		return EXIT_FAILURE;
	}
}
