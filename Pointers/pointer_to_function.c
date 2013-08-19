/*************************************************************************************
*	Demonstrating the use of pointer to a function.
*
*	C treats fun() as a function calling and fun as address of the function.
*	Even functions have a place in memory.
*
*	function through pointer is accessed via. (*f)(param..)
**************************************************************************************/

#include<stdio.h>

void execute(void (*f)(double));	// First arg is a pointer to a function of return type void and argument double.
void show(double);

int main(void)
{	execute(show);

	return 0;
}

void execute(void (*f)(double))
{	(*f)(13.45);
}

void show(double a)
{	printf("%lf\n",a);
}
