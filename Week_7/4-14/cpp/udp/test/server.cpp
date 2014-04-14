#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc != 2) {
		cerr << "No PORT" << endl;	
	}
	
	int sockfd;
	struct sockaddr_in servaddr, cliaddr;
	
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);

	bzero(&servaddr, sizeof(servaddr));

	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = hrons((unsigned short)argv[1]);
	return 0;
}
