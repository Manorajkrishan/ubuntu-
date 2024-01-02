#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>


int main(){


	int array1[10];
	int isi[10];
	int fd [2];
        int i=0,num;
        
   pipe(fd);
   pid_t pid;
   pid=fork();


if(pid==0){

 while (i<=10){
   printf("Enter number: ");
   scanf("%d",&num);
   
   if(num%2==0){
       array1[i]=num;
       i++;
       }
       
  }
  

	close(fd[0]);
	
	write(fd[1],&array1,sizeof(array1));
	close(fd[1]);
	
	}
	
	
	if(pid>0){
	wait(NULL);
	close(fd[1]);
	read(fd[0],&isi,sizeof(isi));
	close(fd[0]);
	
	for(int k=0;k<10;k++){
	printf("%d",isi[k]);
	
	}
	}

return 0;

}
