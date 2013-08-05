/**********************************************************************************************************************************************
*	Using sizeof operator with struct.
*
*	When we use sizeof to find size of a structure variable, it may not yield the expected result.
*	This is so because, a compiler may implement structure in memory by replacing empty bytes between the consecutive elements, known as holes.
*	The number of holes is compiler dependent.
*
*	But a hole shall not occur at the starting of the structure, as defined in the C standard.
**********************************************************************************************************************************************/

#include<stdio.h>

struct st
{	int a;
	char c;
};

int main(void)
{	struct st s;	
	printf("%d\n",sizeof(s));

	return 0;
}
