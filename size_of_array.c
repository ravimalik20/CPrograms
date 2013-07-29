/*
	Calculating the size of array with sizeof.

	The return type of sizeof operator is size_t which is an unsigned type.
	Since we know that comparing unsigned types with signed types is dangerous, but in this case it is safe because both numbers are positive.
	Some compilers issue a warning at i<sizeof(a)/sizeof(a[0]) because of comparison of signed and unsigned types. So type casting is prefered here.
*/

#include<stdio.h>

#define SIZE (int)(sizeof(a)/sizeof(a[0]))

int main(void)
{	int a[]={[10]=100,[19]=20};
	int i;

	printf("Size of a:%d\n",sizeof(a)/sizeof(a[0]));

	for(i=0;i<SIZE;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
