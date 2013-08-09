/*
	Dealing with printf()

	When providing arguments to printf, you have to explicitly type convert these for propper results. 
*/

#include<stdio.h>

int main(void)
{	/*	// Problem Cases.
		// In some compilers it results into warnings and in some it results to compile time errors. 
	printf("%d\n",13.45f);
	printf("%f\n",13);
	printf("%f\n",13.45);
	*/

	printf("%d\n",(int)13.45f);
	printf("%f\n",(float)13);
	printf("%f\n",(float)13.45);

	return 0;
}
