/*==========================================================================================
||	
||	Copyright (C) 2013  Ravi Malik
||	
||	This program is free software; you can redistribute it and/or
||	modify it under the terms of the GNU General Public License
||	as published by the Free Software Foundation; either version 2
||	of the License, or (at your option) any later version.
||	
||	This program is distributed in the hope that it will be useful,
||	but WITHOUT ANY WARRANTY; without even the implied warranty of
||	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
||	GNU General Public License for more details.
||	
||	You should have received a copy of the GNU General Public License
||	along with this program; if not, write to the Free Software
||	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
||	
||
*==========================================================================================*/

/*********************************************************************************
*	Understanding Dynamic Memory Allocation taking strings as an example.
*
*	We can use 3 functions for dynamic memory allocation:
*		1. malloc : Allocates uninitialised memory, very fast
*		2. calloc : Allocates a block of memory and clears it.
*		3. realloc : Resizes a previously allocated block of memory.
*
*	Malloc returns a pointer of type void * , a generic pointer.
*
*	If malloc fails to allocate memory, it returns a NULL pointer.
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *concat(const char *, const char *);

int main(void)
{	char *a="Hello";
	char *b="_World";

	char *c=concat(a,b);

	if(c)
	{	printf("%s\n",c);
	}
	else
	{	printf("Couldn't Concatenate Strings.");
	}
	return 0;
}

char *concat(const char *s1, const char *s2)
{	char *result;

	result=(char *)malloc(strlen(s1)+strlen(s2)+1);	// Explicit type conversion is not necessary.

	if(!result)	// Checking if result is null.
	{	printf("Malloc couldn't allocate the memory.\n");	
		return NULL;
	}

	strcpy(result,s1);
	strcat(result,s2);
	
	return result;
}
