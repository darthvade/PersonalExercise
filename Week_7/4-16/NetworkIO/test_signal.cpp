#include <csignal>
#include <iostream>

using namespace std;

void callback(int sig) {
	cout << sig << endl;
}

int main() {

	signal(SIGUSR1, callback);
	while(1);
	return 0;
}
