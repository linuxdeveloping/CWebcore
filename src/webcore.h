#ifndef MYHEADER_H
#define MYHEADER_H

#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>


typedef struct  {
  char* requestRaw;
} HTTPRequest;

//needs to be called before working with the webcore
int initWebcore();



#endif
