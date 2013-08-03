/**********************************************************************************************************************************************
*	Reading a string using scanf and gets.
*	scanf does not read next lines and reads only till the ' ' char, and as usual leaves all the chars to be read by the next scanf call.
**********************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	/* //This is problematic as the char pointer is not initialised to a memory location.
	char *s;

	scanf("%s",s);

	printf("%s\n",s);
	*/

	char a[10];

	printf("Enter the sentence:");
	// making it safe by explicitly telling to read only 9 chars, 10th place is for NULL.
	scanf("%9s",a);
	/*	// This is not safe, as it leaves no space at the end for the NULL char.
	scanf("%10s",a);
	*/	
	printf("%s\n",a);

	return 0;
}
