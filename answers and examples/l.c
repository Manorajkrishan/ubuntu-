#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *thread1()
{
int num,NUM;

printf("hello world");
printf("enter the number");
scanf("%d",&num);

if(num>0)
{
num= NUM;
}

int main()
{
pthread_t tid1[2];
for(i=0;i<2;i++)
{

pthread_t create (&tid1[i],null,thread1,NULL);
pthread_join(tid1[i],NULL);
}

