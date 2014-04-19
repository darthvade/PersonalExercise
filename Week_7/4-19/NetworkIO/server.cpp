/*没有错误处理
 *
 */

#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <cstring>

typedef sockaddr SA;

int main(int argc, char *argv[]) {

	int serverfd;
	serverfd = socket(AF_INET, SOCK_STREAM, 0);


	struct sockaddr_in myaddr;
	bzero(&myaddr, sizeof(myaddr));
	myaddr.sin_family = AF_INET;
	myaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	myaddr.sin_port = htons(atoi(argv[1]));
	bind(serverfd, (SA *)&myaddr, sizeof(myaddr));
	

	listen(serverfd, 1024); //主动套接字->监听套接字

	
	int connfd;
	struct sockaddr_in cliaddr;
	int cliaddrlen;
	bzero(&cliaddr, sizeof(cliaddr));
	connfd = accept(serverfd, (SA *)&cliaddr, &cliaddrlen);


	return 0;
}
