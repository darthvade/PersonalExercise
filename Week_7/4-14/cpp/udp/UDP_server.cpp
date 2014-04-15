#include "UDP_server.h"

UDPServer::UDPServer(int port): _servport(port) {
	_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	_bind();
}

UDPServer::~UDPServer() {
	close(_sockfd);
}

std::string UDPServer::receive() {
	char buf[BUF_SIZE];
	int n; 	
	socklen_t = len = sizeof(_cliaddr);

}

void UDPServer::send(const std::string &s) {

}

void UDPServer::_bind() {
	bzero(&_servaddr, sizeof(_servaddr));
	bzero(&_cliaddr, sizeof(_cliaddr));
	_servaddr.sin_family = AF_INET;
	_servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	_servaddr.sin_port = htons(_servport);
	bind(_sockfd, (SA *)&_servaddr, sizeof(_servaddr));
}
