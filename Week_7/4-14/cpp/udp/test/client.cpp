#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc != 3) {
		cerr << "Error! [IPADDR] [PORT]" << endl;
	}
	int sockfd;
	struct sockaddr_t servaddr;

	return 0;
}
