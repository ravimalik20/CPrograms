/**********************************************************************************************************************************************
*	(cast) operator is considered a unary opeartor and precedednce of all the unary opearors is greater than that of the binary operators.
*
*	Casting can be used to prevent overflow.
*	For exp:
*	int a=10000
*	long b;
*	b=a*a;
*
*	At first glance it seems that a*a can be accomodated into a long type.
*	But the thing is that when 2 int types are multiplied the result is int type, which is already overflowed before before getting assigned to long.
**********************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	int a;
	long b;

	a=100000;
	b=a*a;
	printf("Resut without Casting:%ld\n",b);

	// In this case (a*a) has already been overflowed and then casting it is fruitless.	
	a=100000;
	b=(long)(a*a);
	printf("Resut with impropper Casting:%ld\n",b);

	// In this case, since (cast) operator is computed first due to higher precedence, it converts the first a into long explicitly which results into the second a converted to long implicitly.
	a=100000;
	b=(long)a*a;
	printf("Resut with propper Casting:%ld\n",b);

	return 0;
}
