/******************************************************************************************************************************************
*	Do define an escape sequence, the number which follows the \ should be an octal or hexadecimal and should lie within the range of unsigned char.
*	Escape sequence can be used to print charachters, and more often to print charachters that are not present on the keyboard.
* When providing input as hexadecimal, provide as \xaf and when providing as octal, simply write the number after \ like \12.
*******************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	printf("Printing '0' with the help of Escape sequence:\60\n");
	printf("Printing '1' with the help of Escape sequence:\61\n");

	printf("\n");

	printf("Now printing charachters that are not presenton the keyboard:\n");
	printf("\xaf\n");

	return 0;
}
