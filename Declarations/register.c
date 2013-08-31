/**********************************************************************************************************************************************
*	Register Storage Class.
*
*	register int a;
*
*	Specifying a register storage class is a request to the compiler. If feasible it will be stored into a register else into main memory.
*
*	Register variables share all the properties of automatic variables, i.e., block scope/ file scope, internal linkage and block/file duration.
*	But the difference is that we cannot perform & operation on register variables as registers have no addresses.
*	Even if the request of register is rejected, then also we cannot get their address.
*
*	Used for performance gains.
*
*	Can be applied only to block variables. 
**********************************************************************************************************************************************/

#include<stdio.h>

/*
// Illegal because register storage class can be applied to block variables only.
register int a;
*/

int main(void)
{	register int a=20;	

	/*
	// Error because we cannot access the address of a register variable.	
	printf("%u\n",&a);
	*/

	printf("%d\n",a);

	return 0;
}
