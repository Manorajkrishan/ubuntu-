#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
	
	
	void *  binaryNum(){
		int binary[32],decimal;
		printf("enter a decimal value:");
		scanf("%d",&decimal);
		int i=0;
		
		
		while(decimal>0){
			binary[i]=decimal%2;
			decimal=decimal/2;  /*tiger hukummmmmm*/
			i++;
			
		}
		
		printf("Binary :");
		for(int j=i-1;j>=0;j--){
		
			printf("%d",binary[j]);
		
		
		}
		printf("\n");
		
	}
	
int main (){

	pthread_t pappa;
	pthread_create(&pappa,NULL,binaryNum,NULL);
	pthread_join(pappa,NULL);
	
	
	return 0;


}
