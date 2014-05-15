/*
* Situations could occur when the user input or certain conditions
* alter the code to behave not normally. Hence we need a way to detect
* those and move gracefully out of those situations.
*
* Assert is a checking tool (macro/function) which accepts a scalar 
* condition (assertion) which is expected to be true, and if false
* prints the error message to the standard error stream and exits the 
* program gracefully.
*/

#include<stdio.h>
#include<assert.h>

#define N (10)
#define IS_BOUND(i, n) ( ( (i)>=0 && (i)<=(n) ) ? (1) : (0) )

/*
* Macro wrapped around the assert macro defined in assert.h to print 
* sucessful assertion of every expression.
*/
#define ASSERT(exp) {	assert( (exp) );\
						printf( #exp " : Worked\n" );\
					}

int main(void)
{	int arr[N] = {0};

	ASSERT(IS_BOUND(0, N));
	ASSERT(IS_BOUND(1, N));
	ASSERT(IS_BOUND(N, N));
	ASSERT(IS_BOUND(N+1, N));
	ASSERT(IS_BOUND(-1, N));
	ASSERT(IS_BOUND(-N, N));

	return 0;
}
