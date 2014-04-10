#include "rio.h"
#include <stdio.h>

int main() {

	char input[] = "Hello world!";
	rio_writen(STDIN_FILENO, input, sizeof(input) - 1);

	printf("\n%d\n", sizeof(input));

	return 0;
}
