/*
* Signals fall into 2 categories:
*	1. runtime errors
*	2. events caused outside the program
*
*	Many signals occur in an asynchronous way
*
*	signal.h defines macros which represent signals, starting with SIG
*
*	void ( *signal (int sig, void (*func) (int)) ) (int);
*	
*	A signal handler shouldn't call a library function or attempt to 
*	use a variable with static storage duration (exceptions exist)
*
*	signal function returns the pointer to the previous handler of the
*	specified signal
*
*	Predefined signal handlers:
*		1. SIG_DFL : default handler, implementation defined, mostly
*			program termination.
*		2. SIG_IGN : Ignores the signal
*
*	If call to signal is unsuccessfull, then it return SIG_ERR and puts
*	a positive number in errno
*
*	int raise(int sig);
*	Deliberately raise a signal, return value to test success, 0 is 
*	success.
*/

#include<signal.h>
#include<stdio.h>

void handler(int sig);
void raise_sig(void);

int main(void)
{	void (*orig_handler) (int);

	printf("Testing handler for signal %d\n", SIGINT);
	orig_handler = signal(SIGINT, handler);
	raise_sig();

	printf("Changing handler to SIG_IGN\n");
	signal(SIGINT, SIG_IGN);
	raise_sig();

	printf("Restoring original handler\n");
	signal(SIGINT, orig_handler);
	raise_sig();

	return 0;
}

void handler(int sig)
{	printf("Handler called for signal %d\n", sig);
}

void raise_sig(void)
{	raise(SIGINT);
}
