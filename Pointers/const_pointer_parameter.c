/********************************************************************************************************
*	Const Pointer Parameters.
*
*	BY making function parameter which is a pointer, const, we make sure that the function will not modify the value of the address placed inside the pointer.
*
*	We can assign a new addres to the pointer but we cannot modify the contents at the address placed inside the pointer.
********************************************************************************************************/

#include<stdio.h>

void pointer(const int *);
void pointer2(int * const);

int main(void)
{	int n=20;
	pointer(&n);
	pointer2(&n);

	printf("n:%d\n",n);
}

void pointer(const int *a)
{	/*	// Illegal. Cannot modify the location.	
	*a=*a+1;
	*/

	int b;
	a=&b;
	
	printf("%d\n",*a);
}

void pointer2(int * const a)
{	int b;

	*a=*a+1;

	/*	// Here pointer is read only, not the location pointed to by the pointer.
	a=&b;
	*/
}
