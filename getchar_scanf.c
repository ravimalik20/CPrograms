/**********************************************************************************************************************************************
*	Issue while using scanf and getchar together.
*
*	Since we know that scanf is a pattern matching function. When it encounters a non spce charachter and if that char is not required, it puts the char back to be read by successive scanf calls.
*	This poses a problem because while using getchar, those unread chars are picked by getchar.
**********************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	int a;
	char c;

	// First enter the input 12e, it will put 12 in a and the leftover e in c.
	// Next enter 12.e (where . is space), it will put 12 in a and ' ' in c.
	scanf("%d",&a);		
	c=getchar();

	printf("a:%d and c:%c",a,c);

	return 0;
}
