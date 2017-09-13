#include<stdio.h>
#include<pthread.h>

#define OUTPUT_MAX 1000

void *printOdd(void *data);
void *printEven(void *data);

pthread_mutex_t mutex_counter = PTHREAD_MUTEX_INITIALIZER;
int counter = 1;

void main()
{
	pthread_t thread1, thread2;

	pthread_create(&thread1, NULL, printOdd, NULL);
	pthread_create(&thread2, NULL, printEven, NULL);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	pthread_exit(NULL);
}

void *printOdd(void *data)
{
	while (counter < OUTPUT_MAX) {
		while (counter % 2 != 0) {
			pthread_mutex_lock(&mutex_counter);
			printf("%d\n", counter++);
			pthread_mutex_unlock(&mutex_counter);
		}
	}
}

void *printEven(void *data)
{
	while (counter < OUTPUT_MAX) {
		while (counter % 2 == 0) {
			pthread_mutex_lock(&mutex_counter);
			printf("%d\n", counter++);
			pthread_mutex_unlock(&mutex_counter);
		}
	}
}
