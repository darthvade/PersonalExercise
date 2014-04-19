/*没有错误处理
 *
 */

#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <cstring>

int main(int argc, char *argv[]) {

	int serverfd;
	serverfd = socket(AF_INET, SOCK_STREAM, 0);


	struct sockaddr_in myaddr;
	bzero(&myaddr, sizeof(myaddr));
	//bind(serverfd, );

	return 0;
}
