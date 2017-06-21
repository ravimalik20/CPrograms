#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

#define NUM_THREADS 4

void *printHello(void *threadId)
{
	long tid = (long)threadId;

	printf("Hey there! This is thread: %ld\n", tid);

	pthread_exit(NULL);
}

void main()
{
	pthread_t threads[NUM_THREADS];
	int rc;
	long t;

	for (t = 0 ; t < NUM_THREADS ; t++) {
		printf("In main. Creating thread: %ld\n", t);

		rc = pthread_create(&threads[t], NULL, printHello, (void *)t);

		if (rc) {
			fprintf(stderr, "ERROR; return code from pthread_create is %d\n",
				rc);
			exit(-1);
		}
	}

	pthread_exit(NULL);
}
