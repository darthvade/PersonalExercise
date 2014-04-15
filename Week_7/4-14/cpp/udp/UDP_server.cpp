#include "UDP_server.h"

UDPServer::UDPServer(int port): _servport(port) {
	_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	_bind(sockfd, (SA *)&_servaddr, sizeof(_servaddr));
}

UDPServer::~UDPServer() {

}

std::string UDPServer::receive() {

}

void UDPServer::send(const std::string &s) {

}

void UDPServer::_bind() {
	bzero(&_servaddr, sizeof(_servaddr));
	bzero(&_cliaddr, sizeof(_cliaddr));
	_servaddr.sin_family = AF_INET;
	_servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	_servaddr.sin_port = htons(_servport);
	bind(sockfd, (SA *)&_servaddr, sizeof(_servaddr));
}
