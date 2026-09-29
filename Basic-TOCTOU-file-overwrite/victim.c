#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){

	char *target = "/tmp/target";

	if(access(target,W_OK)==0){
		int fd = open(target, O_WRONLY| O_APPEND);
		if(fd!=-1){
			write(fd, "VICTIM_WAS_HERE\n",16);
			close(fd);
		}
	}

	return 0;
}
