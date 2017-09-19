#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

#define NUM_THREADS 4

typedef struct thread_data {
	int thread_id;
	int sum;
	char *message;
} Thread_data;

void *printThreadInt(void *data_int)
{
	long data = (long)data_int;

	printf("THREAD: Data passed:%ld\n", data);

	pthread_exit(NULL);
}

void *printThreadStruct(void *data_struct)
{
	Thread_data *data = (Thread_data *)data_struct;

	printf("THREAD: Task_id:%d, sum:%d, Message:%s\n", data->thread_id,
		data->sum, data->message);

	free(data->message);
	free(data);

	pthread_exit(NULL);
}

void main()
{
	pthread_t threads_int[NUM_THREADS], threads_struct[NUM_THREADS];
	int rc;
	long i; // Has to be long, i.e., same size as void pointer address.
	Thread_data *data;
	char *message;

	for (i = 0; i < NUM_THREADS; i++) {
		printf("CREATING THREAD INT: %ld\n", i);
		rc = pthread_create(&threads_int[i], NULL, printThreadInt, (void *)i);
		if (rc) {
			fprintf(stderr, "ERROR: Cannot create thread. ERRNO:%d\n", rc);
		}

		message = calloc(500, sizeof(char));
		data = malloc(sizeof(Thread_data));
		data->thread_id = i;
		data->sum = i*i+i;
		sprintf(message, "Hello World!! Greetings from thread: %ld\n", i);
		data->message = message;

		printf("CREATING THREAD STRUCT: %ld\n", i);
		rc = pthread_create(&threads_struct[i], NULL, printThreadStruct,
			(void *) data);
		if (rc) {
			fprintf(stderr, "ERROR: Cannot create thread. ERRNO:%d\n", rc);
		}
	}

	pthread_exit(NULL);
}
