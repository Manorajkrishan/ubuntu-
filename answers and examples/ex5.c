
#include <stdio.h>
#include <unistd.h>
int main (){
	int ret;
	printf("Hellow Word\n");
	ret =fork();

	if(ret==0){
		printf("I am child and return value =%d\n", ret); printf("child pid:%d\n", getpid());
		printf("child's parent pid:%d\n", getppid());
	}
	else{
		printf("i am parent and return value=%d\n", ret);
		printf("parent pid:%d\n",getppid());
	}
	sleep(20);
	return 0;
}


