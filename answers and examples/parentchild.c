#include<stdio.h>
#include<unistd.h>

int main(){
	printf(" i am parent\n");
	fork();
	printf("hello world\n");

	return 0;
}
