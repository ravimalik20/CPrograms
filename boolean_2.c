/********************************************************************************************************************
*	How to deal with boolean variables in C. Part-2.
*	In C99 the boolean variables are introduced with an inbuilt type _Bool.
*	It accepts only 0 or 1 as a value and trying to provide a non-zero value will result into storing 1 in it.
*********************************************************************************************************************/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{	_Bool a=FALSE;

	if(a==TRUE)
	{	printf("_Bool is working!!\n");
	}
	else
	{	printf("_Bool is still working!!\n");
	}

	return 0;
}
