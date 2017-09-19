/*
* Example demonstrating synchronization by condition variables.
*/

#include<stdio.h>
#include<pthread.h>

#define OUTPUT_MAX 100

void *print_odd(void *data);
void *print_even(void *data);

int counter = 1;

pthread_mutex_t mutex_counter;
pthread_cond_t cond_odd, cond_even;

void main()
{
	pthread_mutex_init(&mutex_counter, NULL);
	pthread_cond_init(&cond_odd, NULL);
	pthread_cond_init(&cond_even, NULL);

	pthread_t thread_odd, thread_even;

	pthread_create(&thread_odd, NULL, print_odd, NULL);
	pthread_create(&thread_even, NULL, print_even, NULL);

	pthread_join(thread_odd, NULL);
	pthread_join(thread_even, NULL);

	pthread_mutex_destroy(&mutex_counter);
	pthread_cond_destroy(&cond_odd);
	pthread_cond_destroy(&cond_even);

	pthread_exit(NULL);
}

void *print_odd(void *data)
{
	while (counter < OUTPUT_MAX) {
		pthread_mutex_lock(&mutex_counter);
		while (counter % 2 == 0) {
			pthread_cond_wait(&cond_odd, &mutex_counter);
		}

		printf("%d\n", counter++);
		pthread_mutex_unlock(&mutex_counter);
		pthread_cond_signal(&cond_even);
	}
}

void *print_even(void *data)
{
	while (counter < OUTPUT_MAX) {
		pthread_mutex_lock(&mutex_counter);
		while (counter % 2 != 0) {
			pthread_cond_wait(&cond_even, &mutex_counter);
		}

		printf("%d\n", counter++);
		pthread_mutex_unlock(&mutex_counter);
		pthread_cond_signal(&cond_odd);
	}
}
