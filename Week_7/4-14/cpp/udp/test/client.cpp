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
	struct sockaddr_in servaddr;
	
	bzero(&servaddr, sizeof(servaddr));

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons((unsigned int)argv[2]);
	inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

	return 0;
}
