/***********************************************************************
*	Understanding how to deal with parametrised macro definitions.
*	
*	Unsing Macro is advantageous because:
*		Programs may run slightly faster, due to no overhead of function calls.
*		The inputs to macros are generic.
*
*	Disadvantages of macros are:
*		Compiled code will often be lag=rger.
*		No type checking for input arguments
*		Not possible to have pointer to a macro
*		macro may process an argument more than once, and is prominent when an argument has a side effect.
************************************************************************/

#include<stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define IS_EVEN(n) ((n)%2==0)
#define TO_UPPER(c) ((c)>='a'&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{	int a=10,b=21;
	int i=MAX(a,b);

	if(IS_EVEN(i))
	{	printf("%d is even.\n",i);
	}
	else
	{	printf("%d is odd.\n",i);
	}

	printf("To Upper:%c\n",TO_UPPER('c'));
	printf("To Upper:%c\n",TO_UPPER(32+36));

	printf("Max:%d\n",MAX(i++,a));
	/*
	Expected answer 21, but it is 22.
	Because, MAX(i++,a) is converted to ((i++)>(a)?(i++):(a)) ; and here i++ is evaluated twice rather than once.	
	*/

	return 0;
}
