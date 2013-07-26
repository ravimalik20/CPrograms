/*******************************************************************************************
*	How to deal with boolean in C.
*	yet another way to deal with booleans is to use header file stdbool.h.
*	It defines a macro bool equal to _Bool and also define macro for true and false.
********************************************************************************************/

#include<stdio.h>
#include<stdbool.h>

int main(void)
{	bool a=false;

	if(a==true)
	{	printf("stdbool.h is working!!\n");
	}
	else
	{	printf("stdbool.h is still working!!\n");
	}
	
	return 0;
}
