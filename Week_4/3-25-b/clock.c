#include<signal.h>
#include<stdio.h>
#include<unistd.h>

void hehe(int sig) {
	printf("I got signal %d\n", sig);
}

int main() {
	struct sigaction act;
	act.sa_handler = hehe;
	sigemptyset(&act.sa_mask);	
	act.sa_flags = 0;

	sigaction(SIGINT, &act, 0);
	while(1) {
		printf("Hello world!\n");
		sleep(1);
	}

	return 0;
}
