/*
*	Understanding Temporary Files.
*
*	There is sometimes need to create temporary files which get
*	removed after program completion. Hence there are two functions
*	which help us to do so.
*
*	There are two ways to create a temporary file:
*		1. which computer creates for you
*		2. which you create yourself.
*
*	When computer creats the file, it assigns the name itself
*	and we have no knowledge of that name. Hence we cannot use
*	this method to make the file permanenet in future.
*
*	The other method is to create a file in run time. But we 
*	require a name to create and that name should not conflict
*	with other files. Hence C provided facility that gives us 
*	name of the file in run time which we create using fopen 
*	which can be made permanent in future.
*
*	TMP_MAX macro defines the maximum number of temp file names
*	which can be assigned. So don't use temp files in excess. 
*
*	L_tmpnam is the macro which specifies the prefered lenght of
*	the name of the temporary file to be generated using tmpnam()  
*
*	FILE *tmpfile(void);
*		-creates temp file, with name which is not known to us.
*		-returns the FILE pointer with which we operate the 
*		file.
*		-file is opened in wb+ mode.
*		-temp files cannot be made permanent afterwards coz 
*		we have no controll over the name of the file.
*	char *tmpnam(char *s);
*		- generates the name for the file.
*		- purpose is to generate a name for a (temp) file to 
*		avoid name clashes with other files. And also as a 
*		future need to make the file permanent.
*		- used to pass the name to fopen to create file 
*		manually
*/

#include<stdio.h>

int main()
{	FILE *tfp1 = tmpfile();

	if( tfp1 == NULL )
	{	fprintf( stderr, "Cannot create temporary file.\n" );
	}
	else
	{	fprintf(tfp1, "This is the temporary file.\n");
		printf( "The screen is now on hold. Press enter to continue and in the mean time check for the temp file created." );
		getchar();
	}

	char s[L_tmpnam];
	tmpnam(s);
	printf("Name of the file is:%s\n",s);
	
	FILE *fp2 = fopen( s, "w" );
	if( fp2 == NULL )
	{	fprintf( stderr, "File %s cannot be created.", s );
		return -2;
	}
	else
	{	fprintf( fp2, "This is the file created with name %s\n",s );
		fclose(fp2);
		return 0;
	}
}
