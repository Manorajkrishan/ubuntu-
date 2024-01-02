#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>




void * patten(){

	int i,j,n;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		/*for(j=1;j<=i;j++){
			printf("%d",j);
		
		}*/
		printf("%d \n",i);
	
	}
	for(i=n;i>=1;i--){
	
		for(j=1;j<=i;j++){
		
			printf("%c",'*');
		}
	printf("\n");
	
	}
}

int main(){

	pthread_t puk;
	pthread_create(&puk,NULL,patten,NULL);
	pthread_join(puk,NULL);

return 0;

}
