#include <stdio.h>
#include "webcore.h"

int httpCallback(HTTPRequest request);
int startModule(int (*registerApplication)(int (*function)(HTTPRequest) )){
printf("it fucking worked\n");
(*registerApplication)(httpCallback);

}

int httpCallback(HTTPRequest request){


}
