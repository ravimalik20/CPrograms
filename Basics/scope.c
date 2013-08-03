/**********************************************************************************************************************************************
*	Understanding the scope of the variable.
*
*	A variable can have two types of scope:
*		1. File Scope (visible throughout the file since being declared.)
*		2. Block Scope (visible within the block declared, since being declared.)
*
*	Apart from the visibility of the variable, it can have automatic or static storage location.
*
*	The most important scope rule is:
*		If a variable is declared within a block which is already declared outside the block, then the new variable hides the outside declared block for within the block and replaces the outside variable for the block.
*		When the block ends, the old variable regains its value again.
**********************************************************************************************************************************************/

#include<stdio.h>

int v=10;

void func()
{	int v=12345;
	int i;

	printf("Value of the block variable v:%d\n",v);

	for(i=0;i<5;i++)
	{	static int v=5;
		printf("Value of the block variable v:%d\n",v++);
	}

	printf("Value of the block variable v:%d\n",v);
}

int main()
{	printf("Value of the external variable v:%d\n",v);

	if(v==10)
	{	int v=20;
		printf("Value of the block variable v:%d\n",v);
	}
	printf("Value of the external variable v:%d\n",v);

	func();

	return 0;
}
