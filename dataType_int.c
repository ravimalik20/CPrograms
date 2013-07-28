/**********************************************************************************************************************************************
*	Various techniques of dealing with integer types.
*	There are 3 ways in which we can provide data to an integer variable:
*		1. base 10, decimal, a=12345 (Must not start with a 0), equivalent to decimal 12345
*		2. base 8, octal, a=0123 (Must strictly start with a 0), equivalent to decimal 83
*		3. base 16, hexadecimal, a=0x1234 (Must strictly start with 0x), equivalent to decimal 4660
*	It is worth noticing that though the method of providing data are different, these are not of different types.
*	In memory, an integer is always represented in binary form regardless of the way it is entered by the user.
*
*	The integer arithmetic can also be mixed in types,
*	e.g: a=123+0234+0x456;		resulting into decimal 1389 
*
*	The space an integer takes in the memory is further classified by three specifiers
*		1. short int
*		2. int 
*		3. long int
*
*	The actual size in memory is architecture dependent, i.e. 16bit, 32 bit, 64 bit, etc; but the sizes of some are standardised.
*
*	An integer can further represent in memory in two forms:
*		1. signed	(Contains neqative numbers also)
*		2. unsigned	(Contains non-negative numbers)
*
*	When an integer constant is written by a user, comiler tries to put it into one of these types depending on the size : int, unsigned int, long, unsigned long.
*	To explicitly define the type of constant append the mentioned modifiers at the end of the constant:
*		1. long int l,L; a=1234l or a=1234L
*		2. unsigned int u,U; a=1234u or a=0x4afU
*		3. unsigned long int ul,UL; a=1234ul or a=0x12345abfUL
*
*	In C99 there is another type of integer: long long int to support 64 bit arithmetic.
**********************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	int a;

	a=12345;
	printf("Decimal Value:%d\n",a);
	printf("Octal Value:%o\n",a);
	printf("Hexa-Decimal Value:%x\n",a);
	printf("\n");

	a=04567;
	printf("Decimal Value:%d\n",a);
	printf("Octal Value:%o\n",a);
	printf("Hexa-Decimal Value:%x\n",a);
	printf("\n");

	a=0x789ab;
	printf("Decimal Value:%d\n",a);
	printf("Octal Value:%o\n",a);
	printf("Hexa-Decimal Value:%x\n",a);
	printf("\n");

	a=12345+04567+0x789ab;
	printf("Decimal Value:%d\n",a);
	printf("Octal Value:%o\n",a);
	printf("Hexa-Decimal Value:%x\n",a);
	printf("\n");

	unsigned int u;
	
	printf("Enter value of unsigned int in decimal:");
	scanf("%u",&u);
	printf("%u",u);
	printf("Enter value of unsigned int in octal:");
	scanf("%o",&u);
	printf("%o",u);
	printf("Enter value of unsigned int in hexa-decimal:");
	scanf("%x",&u);
	printf("%x",u);

	return 0;
}
