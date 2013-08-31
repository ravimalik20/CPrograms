/*
	Understanding various cases of initializers.

	Initialiser for a variable with static storage duration has to be a constant.
*/

#include<stdio.h>

#define N 10

void fun1(void);
void fun2(void);

int main(void)
{	fun1();

	return 0;
}

void fun1(void)
{	int n=1;	
	/*
	// Initialiser should be a constant;	
	static int a=n;
	*/
	printf("%d\n",n); 
}




