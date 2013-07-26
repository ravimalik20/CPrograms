/************************************************************************************************************************************
*	Switch Statement
*	switch(constant_integer)	// Char shall do coz it is actually represented in memory with ASCII codes which are int.
*	{	case constant_expression:
*			statements;
*		case constant_expression:
*			statements;
*		.
*		.
*		.
*		default:		// Optional
*			statements; 
*	}
*************************************************************************************************************************************/

#include<stdio.h>

#define ZERO 0

int main(void)
{	int a;
	const int b=4;

	printf("Provide the argument to the switch statement:");
	scanf("%d",&a);

	switch(a)
	{	case ZERO:
			printf("Case 0\n");
			break;
		case 1:
			printf("Case 1\n");
			break; 
		case ZERO+2:
			printf("Case 2\n");
			break;
		case 1+2:
			printf("Case 3\n");
			break;
		/* This case not working
		case b:
			printf("Case 4\n");
			break;
		*/
		default:
			printf("Case DEFAULT\n");
			break;
	}
	
	return 0;
}
