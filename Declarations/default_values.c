/**************************************************************************
*	Default values of uninitialised variables.
*
*	Default value depends on the storage duration of the variable.
*		automatic have no default value.
*		static have 0 as default.
**************************************************************************/

#include<stdio.h>

void fun();

int main(void)
{	static int a;
	printf("%d\n",a);	// Can't explain why this is 0.

	fun();

	return 0;
}

void fun()
{	int a;
	printf("%d\n",a);

	static int b;
	printf("%d\n",b);

}
