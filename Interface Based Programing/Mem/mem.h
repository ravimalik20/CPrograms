#ifndef MEM_INCLUDED
#define MEM_INCLUDED

#include"../except.h"

extern const Except_T Mem_Failed;

/*
* Same as malloc.
* Checked runtime error : 
* 	- Passing negative nbytes
*
* Last two args are the file name and the line where function is called
* , used for error checking.
*/
extern void *Mem_alloc(long nbytes, 
	const char *file, int line);

/*
* Allocates an array of length count and each element of size
* nbytes. Initializes the array to zero.
* NULL pointer and 0.0 are not necessarily represented by zeros so
* it may allocate them incorrectly.
*
* Last two args are the file name and the line where function is called
* , used for error checking.
*/
extern void *Mem_calloc(long count, long nbytes,
	const char *file, int line);

extern void Mem_free(void *ptr, 
	const char *file, int line);

/*
* Resizes the block of memory.
* If cannot resize raises Mem_Failed.
* RESIZE macro evaluates ptr more than once.
*/
extern void *Mem_resize(void *ptr, long nbytes,
	const char *file, int line );

#define ALLOC(nbytes) \
	Mem_alloc( (nbytes), __FILE__, __LINE__ )
#define CALLOC(count, nbytes) \
	Mem_calloc( (count), (nbytes), __FILE__, __LINE__ )
#define FREE(ptr) ( (void)(Mem_free((ptr, \
	__FILE__, __LINE__), (ptr) = 0) )
#define RESIZE(ptr, nbytes) ( (ptr) = Mem_resize((ptr), \
	(nbytes), __FILE__, __LINE__) )

#define NEW(p) ( (p) = ALLOC((long)sizeof *(p)) )
#define NEW0(p) ( (p) = CALLOC(1, (long)sizeof *(p)) )

#endif /*MEM_INCLUDED*/

