#include <pthread.h>
#include <stdio.h>
#define BSIZE 4
#define NUMITEMS 30
typedef struct
{
char buf[BSIZE]; int occupied;
int nextin, nextout;
pthread_mutex_t mutex;
pthread_cond_t more;
pthread_cond_t less;
} buffer_t;

buffer_t buffer;
void * producer(void *);
void * consumer(void *);
#define NUM_THREADS 2

pthread_t tid[NUM_THREADS];


main( int argc, char *argv[] )
{
int i;
pthread_cond_init(&(buffer.more), NULL);
pthread_cond_init(&(buffer.less), NULL);
pthread_create(&tid[1], NULL, consumer, NULL);
pthread_create(&tid[0], NULL, producer, NULL);
for ( i = 0; i < NUM_THREADS; i++)
pthread_join(tid[i], NULL);
printf("\n main() reporting that all %d threads have terminated\n", i);


}


void * producer(void * parm){

	char item[NUMITEMS]="It's a small world, after akkk";
	int i;

	printf("producer started\n");

	for(i=0;i<NUMITERMS;x++){

		if(item[i]== 'o')break;

		pthread_mutex_lock(&buffer.mutex);

		if(buffer.occupied>=BSIZE){
			printf("producer waiting\n");
		}

		while(buffer.occuped>=BSIZE)

			pthread_cond_wait(&(buffer.less),&buffer.mutex);

			printf("producer executing\n");

			buffer.buf[buffer.nextin+]=item[i];
			buffer.nextin %=BSIZE;
			buffer.occupied++;

			pthread_cond_signal(&(buffer.more));
			pthread_mutex_unlock(&(buffer.mutex));
	}

	printf("producer exiting\n");

	pthread_exit(0);

	return 0;
			
