/**
* Practice of Low-Level File Access
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main() {
	/*if((write(1, "Here is some data\n", 18)) != 18) {
		write(2, "Error\n", 6);
	}*/
	/*
	int nbits;
	char buffer[5];
	nbits = read(0, buffer, 5);
	write(1, buffer, nbits);
	*/
	int filedisc;
	filedisc = open ("KevinFile", O_CREAT, S_IRUSR|S_IWUSR);
	printf("filedisc = %d\n", filedisc);
	close(filedisc);
	exit(0);
}
