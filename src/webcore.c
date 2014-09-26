#include <stdio.h>
#include "webcore.h"
int initWebcore(){
	int socketfd = socket(AF_UNSPEC, SOCK_STREAM, 12345);
  	close(socketfd);
  	return 0;
}

int registerApplication(int (*function)(HTTPRequest) ){
	printf("Got a registration");
	return 0;
}
