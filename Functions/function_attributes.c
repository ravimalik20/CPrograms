/*
* Function attributes is a way to give more info. about the function to the
* compiler. This is useful for the compiler to perform optimizations.
*/

#include<stdio.h>

/*
* Pure attribute means that function does no other job than giving a return
* value, which is dependent on the input value or a global variable.
* These functions can be optimized by the compiler.
*/
int square(int x) __attribute__ ((pure, always_inline));

void main()
{
	printf("Square of %d is %d\n", 5, square(5));
}

int square(int x)
{
	return x * x;
}
