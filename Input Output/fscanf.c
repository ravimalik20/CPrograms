/*
*	fscanf is similar in functionality to scanf apart from the fact
*	that it reads from a stream.
*
*	int fscanf(FILE * restrict stream, const char * format, ...);
*/

#include<stdio.h>

int main()
{	int a, b;

	printf( "Enter the two numbers:" );

	/* Similar to scanf( "%d %d", &a, &b ); */
	fscanf( stdin, "%d %d", &a, &b );

	fprintf( stdout, "%d %d\n", a, b );

	return 0;
}
