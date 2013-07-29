/********************************************************************************************************
*	Dealing with Array Initialisation.
*	When array initialiser elements are lesser than the size of array, the remaining elements are initialised to 0.
*	It is illegal to provide an empty initialiser. int a[10]={};
*	It is illegal to provide more elements in the initialiser than the size of the array.
********************************************************************************************************/

#include<stdio.h>

#define N 10	// When using arrays, providing the size of the array as a macro is excellent idea.

int main(void)
{	int a[N]={0};
	int i;

	for(i=0;i<N;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");

	int b[]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{	printf("%d ",b[i]);
	}
	printf("\n");

	int c[]={[5]=10,[10]=20};
	for(i=0;i<11;i++)
	{	printf("%d ",c[i]);
	}
	printf("\n");

	/*
	//Illegal Statements: gave warning in my latest version of GCC.
	int d[10]={};
	for(i=0;i<10;i++)
	{	printf("%d ",d[i]);
	}
	printf("\n");

	int e[5]={1,2,3,4,5,6};
	for(i=0;i<5;i++)
	{	printf("%d ",e[i]);
	}
	printf("\n");	
	*/	

	return 0;
}
