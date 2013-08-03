/*****************************************************
*	When arrays are pased as a function argument.
******************************************************/

#include<stdio.h>

int len(int arr[])
{	int l;

	l=sizeof(arr)/sizeof(arr[0]);

	return l;
}

int main(void)
{	int a[20]={0};

	// Answer is not what we exected. 1 rather than 20.
	printf("Length Of the array is:%d\n",len(a));

	return 0;
}
