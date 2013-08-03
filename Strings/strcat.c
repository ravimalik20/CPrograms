/****************************************
*	Making our own strcat function.
****************************************/

#include<stdio.h>

#define N 50

char *strcat(char *,const char *);

int main(void)
{	char a[N];
	char b[N];

	printf("Enter String a:");
	scanf("%s",a);

	printf("Enter String b:");
	scanf("%s",b);

	strcat(a,b);

	printf("%s\n",a);

	return 0;
}

char *strcat(char *a, const char *b)
{	while(*a)
	{	a++;
	}
	/*
	while(*a=*b)
	{	*a=*b;
		a++;
		b++;
	}
	*/
	// Condensed Form:
	while(*a++=*b++);
}
