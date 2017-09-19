/*
* Example of semaphore.
*/

#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

#define NUM_THREADS 5

sem_t semaphore;

void *print_hello(void *data)
{
	sem_wait(&semaphore);

	long tid = (long) data;

	printf("Hello from thread: %ld\n", tid);
	printf("Exit from thread: %ld\n", tid);

	sem_post(&semaphore);
}

int main(void)
{
	sem_init(&semaphore, 0, 1);

	sem_wait(&semaphore);

	pthread_t threads[NUM_THREADS];
	long i = 0;

	for (i = 0; i < NUM_THREADS; i++) {
		printf("Thread no. %ld dispatched\n", i);
		pthread_create(&threads[i], NULL, print_hello, (void *)i);
	}

	sem_post(&semaphore);

	for (i = 0; i < NUM_THREADS; i++)
		pthread_join(threads[i], NULL);

	pthread_exit(NULL);
}
