/***********************************************************************
*	Understanding how to deal with parametrised macro definitions.
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
