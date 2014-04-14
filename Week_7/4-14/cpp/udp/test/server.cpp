#include <iostream>
#include <sys/socket.h>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc != 2) {
		cerr << "No PORT" << endl;	
	}
	int scokfd;
	struct sockaddr_in servaddr, cliaddr;


	return 0;
}
