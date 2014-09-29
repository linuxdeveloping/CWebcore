#include "webcore.h"
int initWebcore(){
	int fcode=0;
	struct addrinfo host_description;
	struct addrinfo *host_list;
	
	memset(&host_description, 0, sizeof host_description);
	host_description.ai_family = AF_UNSPEC;
	host_description.ai_socktype = SOCK_STREAM;
	host_description.ai_flags = AI_PASSIVE;
	
	
	getaddrinfo(NULL, "12345" , &host_description, &host_list);
	int socketfd = socket(host_list->ai_family, host_list->ai_socktype, host_list->ai_protocol);
	fcode = bind(socketfd, host_list->ai_addr, host_list->ai_addrlen);
  	if(fcode == -1){
	  printf("Failure whilest binding");
	  return;
	}
	fcode = listen(socketfd, 50);
	if(fcode == -1){
	  printf("Failure whilest binding");
	  return;
	}
	while(1){
	 
	}
	close(socketfd);
  	return 0;
}

int registerApplication(int (*function)(HTTPRequest) ){
	printf("Got a registration");
	return 0;
}
