/*
* Test program to test arith.h and its implementation arith.c
*
* To compile on linux via. gcc run:
*	gcc -o arith_test arith_test.c arith.c
*/

#include<stdio.h>
#include"arith.h"

#define DATA_SET_LENGTH_1 4
#define DATA_SET_LENGTH_2 5

int main(void)
{	printf("Arith_max:\n");
	printf("%d\n", Arith_max(10, 20));
	printf("%d\n", Arith_max(20, 10));
	printf("%d\n", Arith_max(-10, 20));
	printf("%d\n", Arith_max(10, -20));

	printf("Arith_min:\n");
	printf("%d\n", Arith_min(10, 20));
	printf("%d\n", Arith_min(20, 10));
	printf("%d\n", Arith_min(-10, 20));
	printf("%d\n", Arith_min(10, -20));

	printf("Arith_div:\n");
	printf("%d\n", Arith_div(20, 5));
	printf("%d\n", Arith_div(-20, 5));
	printf("%d\n", Arith_div(20, -5));
	printf("%d\n", Arith_div(-21, 5));
	printf("%d\n", Arith_div(21, -5));

	printf("Arith_mod:\n");
	printf("%d\n", Arith_mod(20, 5));
	printf("%d\n", Arith_mod(-20, 5));
	printf("%d\n", Arith_mod(20, -5));
	printf("%d\n", Arith_mod(-21, 5));
	printf("%d\n", Arith_mod(21, -5));

	printf("Arith_floor:\n");
	printf("%d\n", Arith_floor(20, 5));
	printf("%d\n", Arith_floor(-20, 5));
	printf("%d\n", Arith_floor(20, -5));
	printf("%d\n", Arith_floor(-21, 5));
	printf("%d\n", Arith_floor(21, -5));

}
