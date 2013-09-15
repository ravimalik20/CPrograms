/*
	Understanding bitwise operators.

	C provides 6 bitwise operators:
		&
		|
		^
		~
		<<
		>>

	Shift OPerators:
		For portability, perform shifts on unsigned numbers only.
		They have lower precedence than arithmetic operators.

*/

#include<stdio.h>

int main(void)
{	unsigned int a=128;

	// Shift Operators.
	unsigned int j=a<<1;
	unsigned int k=a>>1; 

	printf("j:%u\n",j);
	printf("k:%u\n",k);
	printf("a:%u\n",a);	// Notice here a is still unmodified after shifting. 

	printf("%u\n",a<<2+1);	// Notice the lower precedence of << than arithmetic.
	printf("%u\n",(a<<2)+1);

	// Bitwise and, &
	printf("%u\n",j&k);

	// Bitwise or, |
	printf("%u\n",j|k);

	// Bitwise negation, ~
	printf("%u\n",~a);

	// Bitwise XOR, ^
	printf("%u\n",j^k);

	return 0;
}
