#include"atom.h"
#include<stdio.h>
#include<string.h>

int main(void)
{	char *str = "Hello World";

	printf( "%s\n", Atom_new(str, strlen(str)) );
	printf( "%s\n", Atom_new(str, strlen(str)) );
	printf( "%d\n", Atom_length(str) );

	return 0;
}
