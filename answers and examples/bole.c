#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void * calAddition(){
	
	int m,n;
	printf("enter two integer values from:");
	scanf("%d %d",&m,&n);
	int add =m+n;
	printf("the total is :%d",add);	
}


int main(){
	
	pthread_t nawo;
	pthread_create(&nawo,NULL,calAddition,NULL);
	pthread_join(nawo,NULL);
	
	return 0;



}
