/*********************************************************************************
*	Understanding Dynamic Memory Allocation taking strings as an example.
*
*	We can use 3 functions for dynamic memory allocation:
*		1. malloc : Allocates uninitialised memory, very fast
*		2. calloc : Allocates a block of memory and clears it.
*		3. realloc : Resizes a previously allocated block of memory.
*
*	Malloc returns a pointer of type void * , a generic pointer.
*
*	If malloc fails to allocate memory, it returns a NULL pointer.
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *concat(const char *, const char *);

int main(void)
{	char *a="Hello";
	char *b="_World";

	char *c=concat(a,b);

	if(c)
	{	printf("%s\n",c);
	}
	else
	{	printf("Couldn't Concatenate Strings.");
	}
	return 0;
}

char *concat(const char *s1, const char *s2)
{	char *result;

	result=(char *)malloc(strlen(s1)+strlen(s2)+1);	// Explicit type conversion is not necessary.

	if(!result)	// Checking if result is null.
	{	printf("Malloc couldn't allocate the memory.\n");	
		return NULL;
	}

	strcpy(result,s1);
	strcat(result,s2);
	
	return result;
}
