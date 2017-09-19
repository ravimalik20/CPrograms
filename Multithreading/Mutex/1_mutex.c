#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	double *a, *b, sum;
	int veclen;
} DOTDATA;

#define NUMTHREADS 4
#define VECLEN 100

DOTDATA dotstr;
pthread_t callThd[NUMTHREADS];
pthread_mutex_t mutexsum;

void *dotprod(void *arg)
{
	int i, start, end, len;
	long offset = (long)arg;
	double mysum, *x, *y;

	len = dotstr.veclen;
	start = offset*len;
	end = start+len;
	x = dotstr.a;
	y = dotstr.b;

	mysum = 0;
	for (i=start; i<end ; i++) {
		mysum += (x[i]*y[i]);
	}

	pthread_mutex_lock(&mutexsum);
	dotstr.sum += mysum;
	pthread_mutex_unlock(&mutexsum);

	pthread_exit((void *) 0);
}

int main()
{
	long i;
	double *a, *b;
	void *status;
	pthread_attr_t attr;

	a = (double *) malloc(NUMTHREADS*VECLEN*sizeof(double));
	b = (double *) malloc(NUMTHREADS*VECLEN*sizeof(double));

	for (i=0 ; i<VECLEN*NUMTHREADS; i++) {
		a[i] = 1.0;
		b[i] = a[i];
	}

	dotstr.veclen = VECLEN;
	dotstr.a = a;
	dotstr.b = b;
	dotstr.sum = 0;

	pthread_mutex_init(&mutexsum, NULL);

	pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for(i=0; i<NUMTHREADS; i++) {
    	pthread_create(&callThd[i], &attr, dotprod, (void *)i);
    }

    pthread_attr_destroy(&attr);

    for(i=0; i<NUMTHREADS; i++) {
       pthread_join(callThd[i], &status);
    }

    printf ("Sum =  %f \n", dotstr.sum);
    free (a);
    free (b);
    pthread_mutex_destroy(&mutexsum);
    pthread_exit(NULL);
}
