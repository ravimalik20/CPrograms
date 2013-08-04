/*******************************************************************************************
*	Understanding the macros which provide us the feature of conditional compilation.
*
*	Conditional Compiling is most often useful for:
*		Writing Portable Code
*		Writing code which can be compiled using different compilers.
*		Provide default value for a macro. 
********************************************************************************************/

#include<stdio.h>

#if defined(__linux__)
	#define MESSAGE "We are in Linux\n"
#elif defined(__APPLE__)
	#define MESSAGE "We are in Mac\n"
#elif defined(_WIN32)
	#define MESSAGE "We are in Windows\n"
#else
	#define MESSAGE "We are in some unknown environment."
#endif

int main(void)
{	printf(MESSAGE);

	return 0;
}
	
