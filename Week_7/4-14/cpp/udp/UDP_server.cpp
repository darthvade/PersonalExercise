#include "UDP_server.h"

UDPServer::UDPServer() {
	_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	bzero(&_servaddr, sizeof(_servaddr));
	bzero(&_cliaddr, sizeof(_cliaddr));
}

UDPServer::~UDPServer() {

}

std::string receive() {

}

void send(const std::string &s) {
	_servaddr.
}

void _bind() {

}
