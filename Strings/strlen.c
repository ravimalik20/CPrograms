/********************************************************************************************************
*	Writing our own strlen function.
*	size_t is an inbuilt typedef of C, which in most compilers represents an int; used for portability. 
********************************************************************************************************/

#include<stdio.h>

size_t strlen(char *);

int main(void)
{	char a[50];

	printf("Enter the String:");
	scanf("%49s",a);

	printf("Length:%d\n",strlen(a));

	return 0;
}

size_t strlen(char *s)
{	/*
	// Though we have condensed the code quite a lot, thee is hardly any speedup achieved.
	size_t n;	
	for(;*(s++);)
	{	n++;
	}
	return n;
	*/
	// To tell the compiler that the string pointed to by the pointer cannot be modified.
	const char *p=s;
	// Increment the pointer till the null char is found.
	while(*p)	// Don't get tempted in using *p++ here. It will give wrong result.
	{	p++;
	}
	// The difference in the values of the addresses is the length of the string.
	return p-s;
}
