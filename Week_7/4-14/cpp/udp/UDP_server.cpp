#include "UDP_server.h"

UDPServer::UDPServer() {
	_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	bzero(&_servaddr, sizeof(_servaddr));
	bzero(&_cliaddr, sizeof(_cliaddr));
}

UDPServer::~UDPServer() {

}

std::string UDPServer::receive() {

}

void UDPServer::send(const std::string &s) {

}

void UDPServer::_bind() {
	_servaddr.sin_family = AF_INET;
	_servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	_servaddr.sin_port = htons(_servport);
}
