#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/wait.h>

void * calAddition(){
	
	int m,n;
	printf("enter two integer values from:");
	scanf("%d %d",&m,&n);
	int add =m+n;
	printf("the total is :%d",add);	
}


int main(){
	int test;
	pid_t pid;
	pid=fork();
	if(pid==0){
	calAddition();
	}else if (pid>0){
	wait(NULL);
	} else
	{
	    perror("error");	
	}
	/*
	pthread_t nawo;
	pthread_create(&nawo,NULL,calAddition,NULL);
	pthread_join(nawo,NULL);
	*/
	return 0;



}
