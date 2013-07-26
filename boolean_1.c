/*
How to deal with boolean variables in C. Part-1.
boolean variables are not supported in C89 but were introduced in C99 as _Bool.
So in C89 wecan define macros for representing true and false as:
	#define TRUE 1
	#define FALSE 0

	and more conveniently define a boolean type as:
	#define BOOL int
	this is basically an int variable concealed as BOOL
	then we can operate on it as:
	BOOL a=TRUE;
*/

#include<stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void)
{	BOOL a=FALSE;
	
	if(a==TRUE)
	{	printf("Booleans are working!!\n");
	}
	else
	{	printf("Booleans are still working!!\n");
	}

	return 0;
}

