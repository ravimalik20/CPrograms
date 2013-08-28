/**********************************************************************************************************************************************
*	Understanding the daclarations in C.
*
*	Declarations are very important because they assist the compiler about the types of variables and functions etc..
*	and helps in error solving.
*
*	Every declaration has 3 types:
*		Storage Class
*			auto static extern register
*		Type Qualifier
*			const volatile restrict(c99)
*		Type Specifier
*			void char short long int float double signed unsigned
*		Function Specifier (c99)
*			inline
*
*	Properties of Variables:
*		Storage Duration
*			automatic static
*		Scope
*			Block
			File
*		Linkage
*			external
*			internal
*
*	Storage Classes Explained:
*		auto: default for block variables
*			* automatic storage duration
*			* block scope
*			* no linkage
*
*		static: can be used with any variable.
*			when used with a block variable it just turns its storage duration static.
*			when used outside a block it specifies internal linkage of the variable.
*			static essentially hides the function within the file.
*			declaring a function static enables a function to retain data among multiple function calls in a "hidden" area that rest of the program cannot access.
*					
**********************************************************************************************************************************************/

#include<stdio.h>

/*
// This is an error because auto storage class cannot only be assigned to block variables.
auto int a=24;
*/

// This variable has internal linkage and cannot be used outside this file.
static int i=30;

void print_num();
char digit_to_hex(int);

int main(void)
{	auto int a=24;	// Here the auto is redundant as it is default storage class for block variables.
	
	printf("%d\n",i);

	int i;
	for(i=0;i<10;i++)
	{	print_num();
	}
	printf("\n");

	printf("%c\n",digit_to_hex(11));
	printf("%c\n",digit_to_hex(13));

	return 0;
}

void print_num()
{	// Value of variable is retained among multiple function calls in a hidden area inaccessible by any other part of the program.
	static int i=0;
	printf("%d ",i++);
}

char digit_to_hex(int digit)
{	// Leads to efficiency as it is declared only once among all the function calls.	
	static const char hex_char[16]="0123456789abcdef";

	return hex_char[digit];
}
