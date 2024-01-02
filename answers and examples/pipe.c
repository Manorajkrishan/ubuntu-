#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	int n,m;
	int fd[2];
	pid_t x;
	if(pipe(fd)<0){
		perror("Error");
		}
		
		
		x=fork();
	if(x<0){
	perror("Error fork");	
		}
   	if(x>0){
   		close(fd[0]);
	printf("inter a number :");
	scanf("%d",&n);
	write(fd[1],&n,sizeof(n));
	close(fd[1]);
	
   	}else if(x==0){
   		close(fd[1]);
   		read(fd[0],&m,sizeof(m));
   		close(fd[0]);
   		
   		printf("recived number is :%d",m);
   	}
   	
return 0;

}
