/*******************************************************************************************************
*	Comma Operator: ','
*	Comma Operator has the least precedence out of all the operators, even less than the assignment ones.
*	The , operator is processed in the following way:
*	Eg:
*	exp1,exp2,exp3;
*	1. execute exp1 and discard the value
*	2. then execute exp2 and discard and go on like this
*	3. execute the final exp and the value of the final exp is the value of the whole operator.
*
*	Comma operator goes from left to right (left associative IF it is correct to say)
********************************************************************************************************/

#include<stdio.h>

int main(void)
{	int a,b,c;
	
	a=(10+20,30+40);
	printf("a:%d\n",a);

	// Notice the absense of braces here:
	a=10+20,30+40;
	printf("a:%d\n",a);

	// The value resulting after all these ',' operators are evaluated is of the last expresion.
	a=(10+20,30+40,50+60);
	printf("a:%d\n",a);

	// This case is worth looking.
	c=(a=10+20,30+40,b=50+60);
	printf("a:%d\n",a);
	printf("b:%d\n",b);
	printf("c:%d\n",c);

	return 0;
}
