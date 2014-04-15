#include "UDP_server.h"

UDPServer::UDPServer() {
	_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	bzero(&_servaddr, sizeof(_servaddr));
	bzero(&_cliaddr, sizeof(_cliaddr));
}

UDPServer::~UDPServer() {

}

std::string UDPServe::receive() {

}

void send(const std::string &s) {

}

void _bind() {
	_servaddr.sin_family = AF_INET;
	_servaddr.sin_addr.s_addr = htonl(INADDR_ANY);

}
