/*
	Using bitwise operators to operate on bits.
*/

#include<stdio.h>

int main(void)
{	/* Setting the 4th bit from the least significant bit side. */
	unsigned short i=0x0002;
	printf("Befor:%u\n",i);
	i=i|0x10;
	printf("After:%u\n",i);
	
	// More generally:
	int j=3;
	printf("Befor:%u\n",i);	
	i=i|1<<j;	// Set 1 at jth bit of i;
	printf("After:%u\n",i);

	/* Clearing the 4th bit from the least significant bit side. */
	// To achieve this we have to & the number which has 0 on the location which has to be cleared and 1 in every other bit.
	i=0x0012;
	printf("Before:%u\n",i);	
	i=i& ~0x10;
	printf("After:%u\n",i);

	// More generally:
	i=0x0022; 
	printf("Befor:%u\n",i);
	j=5;
	i=i& ~(1<<j);
	printf("After:%u\n",i);

	/* Testing wheather 4th bit is set or not */
	i=0x1010;	
	if(i&0x10)
	{	printf("Fourth bit of 0x%x is set.\n",i);
	}
	else
	{	printf("Fourth bit of 0x%x is not set.\n",i);
	}

	// In general:
	j=3;	
	if(i&(1<<j))
	{	printf("Bit number %d of 0x%x is set.\n",j,i);
	}
	else
	{	printf("Bit number %d of 0x%x is not set.\n",j,i);
	}

	return 0;
}
