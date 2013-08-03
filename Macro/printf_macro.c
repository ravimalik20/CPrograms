/**********************************************************************************************************************************************
*	Creating a macro to be used to print integer values and demonstrating the use of # operator within a macro.
*
*	Consider the macro:
*	# define PRINT_INT(n) printf(#n"=%d",n), the #n will convert the given argument to the string and the effective macro result is:
*	
*	PRINT_INT(i/j); will result into printf("i/j""=%d",i/j);
*	Since the compiler concatenates the two strings when placed one after the other, therefore the effective result is:
*	printf("i/j=%d",i/j);		
*
**********************************************************************************************************************************************/

#include<stdio.h>

#define PRINT_INT(n) printf(#n"=%d\n",(n))	// The #n instructs the compiler to create a string literal of the parameter passed to the macro.

int main(void)
{	int i=10,j=2;	
	PRINT_INT(i/j);

	return 0;
}
