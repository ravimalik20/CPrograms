/*
*	fprintf is the function which has all the functioning of
*	printf but writes to a stream.
*
*	int fprintf(FILE * restrict stream, const char *str, ...);
*/

#include<stdio.h>

int main()
{	/* Similar to printf( "Writing on Standard Output\n" ); */
	fprintf( stdout, "Writing on Standard Output\n" );
	char *s = "Hello World\n";
	fprintf( stdout, "%s", s );

	fprintf( stderr, "Writing on Standard Error\n" );

	return 0;
}
