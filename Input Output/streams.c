/*
*	In C, every Input Ouptput operation is done on a stream.
*	A stream is any thing which could be read from or could
*	be written one.
*	Like display, keyboard, etc.
*	
*	C provides us with three default streams:
*		stdout : standard output
*		stdin : standard input
*		stderr : standard error
*
*	Any stream is handled using a FILE pointer. 
*
*	Many streams can be redirected onto different streams.
*	like, ./a.out > file : will transfer the standard output onto 
*	the text file.
*	./a.out < file will tranfer the file to the standard input,
*	i.e., insted of getting the input from keyboard it reads from
*	the file.
*/

#include<stdio.h>

int main()
{	FILE *fp1 = fopen( "streams.c", "r" );

	if( fp1 == NULL )
	{	/* Writing the output on standard error instead
		of standard output. */	
		fprintf( stderr, "File streams.c does not exists." );
		return -1;
	}

	fprintf( stdout, "Success!!\n" );

	fclose( fp1 );
}
