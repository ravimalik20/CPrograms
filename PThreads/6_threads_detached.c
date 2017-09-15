#include<stdio.h>
#include<pthread.h>

#define NUM_THREADS 4

void *print_hello(void *data);

void main()
{
	pthread_t threads[NUM_THREADS];

	pthread_attr_t thread_attr;
	pthread_attr_init(&thread_attr);
	pthread_attr_setdetachstate(&thread_attr, PTHREAD_CREATE_DETACHED);
	pthread_attr_setscope(&thread_attr, PTHREAD_SCOPE_SYSTEM);

	long i;
	for (i = 0 ; i < NUM_THREADS; i++) {
		printf("Creating thread: %ld\n", i);
		pthread_create(&threads[i], &thread_attr, print_hello, (void *)i);
	}

	for (i = 0 ; i < NUM_THREADS; i++)
		pthread_join(threads[i], NULL);

	pthread_exit(NULL);
}

void *print_hello(void *data)
{
	long tid = (long)data;

	printf("Executing thread: %ld\n", tid);

	printf("Exiting Thread: %ld\n", tid);
}
