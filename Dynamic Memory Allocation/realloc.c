/**********************************************************************************************************************************
*	Understanding realloc.
*
*	realloc is used to resize the dynamically fetched memory block.
*
*	The pointer passed to the call of realloc should be the one obtained from a previous call of malloc,calloc or realloc.
*
*	(void *)realloc(pointer_to_memory,new_size);
	
	When realloc is used:
		It does not initialise the new memory blocks added.
		If realloc cannot expand the memory block, it returns a null pointer and data in previous memory block is unchanged.
***********************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define SIZE1 10

#define SIZE2 20

void print_array(const int *,int);

int main(void)
{	int *a,*b;

	a=calloc(SIZE1,sizeof(int));
	if(!a)
	{	printf("Calloc cannot allocate memory.\n");
		return 1;
	}

	int i;
	for(i=0;i<SIZE1;i++)
	{	a[i]=i;
	}

	printf("Array a:\n");
	print_array(a,SIZE1);

	b=realloc(a,SIZE2);
	if(!b)
	{	printf("Could not expand the memory block.\n");
		return 2;
	}

	printf("Array b:\n");
	print_array(b,SIZE2);

	printf("Both a and b point to same memory location.\n");
	b[4]=12345;

	print_array(a,SIZE1);
	print_array(b,SIZE2);

	return 0;
}

void print_array(const int *a,int n)
{	int i;
	for(i=0;i<n;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");
}
