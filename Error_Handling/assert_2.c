/*
* Make sure not to pass an expression that has a side effect to
* assert. Because execution of assert can be switched off.
*
* By defining a macro NDEBUG, evary assert call is stopped from
* executing.
*/

#define NDEBUG
#include<stdio.h>
#include<assert.h>

int main(void)
{	int i = 0;
	assert( ++i > 0 );

	printf( "%d : Huh it was supposed to be 1!!\n", i );
}
