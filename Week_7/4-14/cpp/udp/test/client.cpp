#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <cstring>

typedef struct sockaddr * SA;

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

	sockfd = socket(AF_INET, SOCK_DGRAM, 0);

	int n;
	socklen_t len = sizeof(servaddr);
	char sentMsg[1024], getMsg[1024];
	while(fgets(sentMsg, 1024, stdin) != NULL) {
		sendto(sockfd, sentMsg, strlen(sentMsg), 0, (SA)&servaddr, len);	
	}

	return 0;
}
