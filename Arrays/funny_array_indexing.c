/********************************************************************************************************
*	How array indexes are realy treated.
*	When we write a[i], the compiler treats it as *(a+i)
*	What if we write the same as i[a]???
*	It shall produce the same result as a[i], beacause it will be read by the compiler as *(i+a), which is the same as *(a+i)
*	P.S. This concept made my day.. :D 
********************************************************************************************************/

#include<stdio.h>

#define N 10

int main(void)
{	int arr[N]={1,2,3,4,5,6,7,8,9,0};
	int i=4;

	printf("arr[i]:%d\n",arr[i]);
	printf("i[arr]:%d\n",i[arr]);
	printf("And this is funny!!!\n");

	return 0;
}
