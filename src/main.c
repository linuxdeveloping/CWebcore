#include "webcore.h"
#include <dlfcn.h>
#include <dlfcn.h>

int main(){
//printf("Application Started...\n");
//initWebcore();

int (*startUp)(int (*registerApplication)(int (*function)(HTTPRequest) ));

void *handle = dlopen("./test.mod", RTLD_LAZY);
startUp = dlsym(handle, "startModule");
(*startUp)(registerApplication);
return 0;
}
