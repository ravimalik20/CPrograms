/*
	Error Handling in Streams
	While reading or writing:
		1. Read write error can occur
		2. EOF encountered
		3. during printf/scanf pattern not matched

	Whenever a stream is declared, two seperate indicators are also
	declared with it: error and eof flags

	int feof(FILE *stream);
		return non zero value if eof indicator is set.
	int ferror(FILE *stream);
		return non zero value if error indicator is set.
	void clearerr(FILE *stream);

*/

#include<stdio.h>
#include<assert.h>

int find_int(const char *filename);

int main(int argc, char *argv[])
{	assert( argc >= 2 );

	if( find_int( argv[1] ) < 0 )
	{	fputs( "find_int failed to operate.\n", stderr );
		return -1;
	}
	else
	{	printf( "Integer Found.\n" );
	}

	return 0;
}

int find_int(const char *filename)
{	assert( filename );	
	
	FILE *fp = fopen( filename, "r" );
	int n;

	if( fp == NULL )
	{	fputs("File can't be opened.\n", stderr);
		return -1;	/* can't open file */	
	}

	while( fscanf(fp,"%d",&n) != 1 )
	{	if( ferror(fp) )
		{	fclose(fp);
			fputs("Read error.\n", stderr);
			return -2;	/* read error */
		}
		if( feof(fp) )
		{	fclose(fp);
			fputs("Integer not found.\n", stderr);
			return -3;	/* integer not found */
		}
		fscanf(fp, "%*[^\n]");
	}

	fclose(fp);
	return n;
}
