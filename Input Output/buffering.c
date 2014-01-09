/*
	Understanding the concept of Buffering for interacting with 
	Streams

	Transfering data from a disk drive is slow. Hence we cannot 
	directly read and write from the disk or else loose eficiency.
	
	Hence, data written to a stream is actually stored in a buffer
	which when becomes full is flushed, i.e., written to actual 
	output device. Similarly input can also be buffered. 

	int fflush(FILE *stream);
		flushses the buffer onto the stream. Actually it is 
		automatically managed but we can manually do it.
		Returns 0 when success else EOF.

	int setvbuf(FILE * restrict stream, 
			char * restrict buff,
			int mode, size_t size );
		-Third argument should have one of the three macros:
			1. _IOFBF(full buf) : data is read from the 				stream when buffer is empty or written when
			its full
			2. _IOLBF(line buf) : data is read or written
			one line at a time.
			3. _IONBF(no buf) : data is read or written 
			directly.
		-Second argument if not NULL is the address of the 			desired buffer. buffer can have static storage 
		duration, automatic or even be allocated dynamically. 
		-Last argument is the number of bytes in the buffer.
		Larger buffer saves time but small buffer saves space.
		-Returns 0 if all is well.
		-Must be called after stream is opened but before any 			other operation is performed.

	int setbuf(FILE * restrict stream, char * restrict buff);
		Assumes default values for mode and size.
		If buff passed NULL then equivalent to:
		(void) setvbuf(stream, NULL, _IONBF, 0);
		else:
		(void) setvbuf(stream, buf, _IOFBF, BUFSIZ);

		BUFSIZ is a macro
	
		Considered obsolete.

		Be sure to close the stream before deallocating the
		buffer. 
*/

#include<stdio.h>
#include<assert.h>

#define FILE_NAME "hello.txt"
#define BUF_SIZE 1024

int main()
{	FILE *fp = fopen(FILE_NAME,"w");
	assert( fp );

	char buf[BUF_SIZE];

	/* Setting the buff as a buffer to fp stream with full buffer
	mode */
	assert( !setvbuf( fp, buf, _IOFBF, BUF_SIZE ) );

	fprintf( fp, "Testing the buffer...\n" );
	printf("Buffer:%s\n",buf);

	assert( !fflush( fp ) );
	printf("Buffer:%s\n",buf);

	fclose( fp );

	return 0;	
}
