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
*		extern: enables several source files to share the same variable.
			a variable can have many declarations but must have only one definition.

			extern int i; is not a definition of a variable,
			it only tells that we need access to a variable that is defined elsewhere.

			exception:
				extern int i=0; serves as a definition of a variable and is same as int i=0;

			extern var always has a static storage duration.
			if var is inside a block, it has block scope.
			else it has file scope.

			If the var was previously defined static, then it has internal linkage,
			otherwise external linkage. 
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
void print_extern_num();

int main(void)
{	auto int a=24;	// Here the auto is redundant as it is default storage class for block variables.
	
	printf("%d\n",i);

	static int j;
	for(j=0;j<10;j++)
	{	print_num();
	}
	printf("\n");

	printf("%c\n",digit_to_hex(11));
	printf("%c\n",digit_to_hex(13));

	for(j=0;j<10;j++)
	{	print_num();
	}
	printf("\n");

	return 0;
}

void print_num()
{	// Value of variable is retained among multiple function calls in a hidden area inaccessible by any other part of the program.
	static int z=0;
	printf("%d ",z++);
}

void print_extern_num()
{	extern int i;

	printf("%d ",i);
}

char digit_to_hex(int digit)
{	// Leads to efficiency as it is declared only once among all the function calls.	
	static const char hex_char[16]="0123456789abcdef";

	return hex_char[digit];
}
