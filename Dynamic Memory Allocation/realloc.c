/**********************************************************************************************************************************
*	Understanding realloc.
*
*	realloc is used to resize the dynamically fetched memory block.
*
*	The pointer passed to the call of realloc should be the one obtained from a previous call of malloc,calloc or realloc.
*
*	(void *)realloc(pointer_to_memory,new_size);
***********************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define SIZE1 10

#define SIZE2 20

void print_array(const int *,int);

int main(void)
{	int *a;

	a=calloc(SIZE1,sizeof(int));

	int i;
	for(i=0;i<SIZE1;i++)
	{	a[i]=i;
	}

	//printf("Array 1:\n");
	print_array(a,SIZE1);

	a=realloc(a,SIZE2);

	printf("Array 2:\n");
	print_array(a,SIZE2);

	return 0;
}

void print_array(const int *a,int n)
{	int i;
	for(i=0;i<n;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");
}
