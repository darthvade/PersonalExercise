#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <iostream>

typedef struct sockaddr SA;

int main(int argc, char *argv[]) {

	int clientfd;
	clientfd = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in seraddr;

	return 0;
}
