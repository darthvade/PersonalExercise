#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>

typedef struct sockaddr * SA;

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
	servaddr.sin_port = htons((unsigned int)argv[1]);

	bind(sockfd, (SA)&servaddr, sizeof(servaddr));

	int n;
	socklen_t len;
	char msg[1024];
	while(1) {
		len = sizeof(cliaddr);	
		n = recvfrom(sockfd, msg, 1024, 0, (SA)&cliaddr, &len);
		sendto(sockfd, msg, n, 0, (SA)&cliaddr, len);
	}

	return 0;
}
