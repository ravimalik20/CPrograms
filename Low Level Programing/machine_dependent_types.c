#include<stdio.h>

/* Char is 1 byte by definition */
typedef unsigned char BYTE;

/* 16 bit word */
typedef unsigned short WORD;

void main()
{
	printf("Sizeof BYTE: %d\n", (int)sizeof(BYTE));

	printf("Sizeof WORD: %d\n", (int)sizeof(WORD));
}
