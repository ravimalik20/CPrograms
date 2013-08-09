/**************************************************************************************
*	Understanding Dynamic Memory Allocation of Arrays.
*
*	We can use malloc to initialise the array, but sometimes calloc is prefered.
*	The difference is that calloc after allocating memory, clears it to 0.
*	
*	calloc(number_of_elements,size_of_an_element);
***************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main(void)
{	int *a;

	//a=malloc(sizeof(int)*SIZE);
	a=calloc(SIZE,sizeof(int));

	if(!a)
	{	printf("Memory Allocation Failed");
		exit(1);	
	}

	int i;
	for(i=0;i<SIZE;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

