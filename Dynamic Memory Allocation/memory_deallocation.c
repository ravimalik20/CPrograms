/*******************************************************************************************************************************************
*	Understanding memory deallocation using free function.
*
*	Malloc and other memory allocation functions obtain storage blocks from a heap.
*	When the memory once allocated is not assigned to any pointer variable, it is said to be garbage.
*	A program that leaves garbage behind has a memory leak.
*	If we don't manage the garbage, it will eventually fill the heap, with no memory available to use and we will run out of memory.
	
	Memory deallocation may lead to dangling pointer problem.
********************************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{	int *a,*b;

	a=malloc(sizeof(int));
	b=malloc(sizeof(int));

	*a=10;
	*b=20;

	printf("a:%d,b:%d\n",*a,*b);

	/*
	a=b;	// Memory previously pointed by a is now garbage and needs to be freed.
	*/

	free(a);	
	a=b;

	printf("a:%d,b:%d\n",*a,*b);

	free(b);

	printf("a:%d\n",*a);	// Undefined Behaviour.

	return 0;
}
