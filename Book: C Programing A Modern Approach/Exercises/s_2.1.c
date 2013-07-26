/*The first programing example of the K&R book slightly modified... The modification is done to understand the concept of a macro*/

#include<stdio.h>

/* #define MESSAGE hello world // Is not what is required */
#define MESSAGE "hello world"		// It is a convention to define a macro in all upper case alphabets

int main(void)
{	printf(MESSAGE);
}
