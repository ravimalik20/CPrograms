/*******************************************************
*	Variable Legth Arrays as a function parameter.
********************************************************/

#include<stdio.h>

#define N 20

// * representing that the length is dependent on the value of one of the arguments
void print_array(int,int [*]);

int main(void)
{	int arr[N]={[10]=1};

	print_array(N,arr);

	return 0;
}

void print_array(int n,int arr[n])
{	int i;
	for(i=0;i<n;i++)
	{	printf("%d ",arr[i]);
	}
	printf("\n");
}
