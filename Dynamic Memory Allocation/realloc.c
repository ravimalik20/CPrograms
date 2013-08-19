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

/**********************************************************************************************************************************
*	Understanding realloc.
*
*	realloc is used to resize the dynamically fetched memory block.
*
*	The pointer passed to the call of realloc should be the one obtained from a previous call of malloc,calloc or realloc.
*
*	(void *)realloc(pointer_to_memory,new_size);
*	
*	When realloc is used:
*		It does not initialise the new memory blocks added.
*		If realloc cannot expand the memory block, it returns a null pointer and data in previous memory block is unchanged.
*		If we paas NULL pointer as a first argument to realloc, it behaves like malloc.
*		If we paas 0 in second argument, i.e., as the size arg., it will free the block.
***********************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define SIZE1 10

#define SIZE2 20

void print_array(const int *,int);

int main(void)
{	int *a,*b;

	a=calloc(SIZE1,sizeof(int));
	if(!a)
	{	printf("Calloc cannot allocate memory.\n");
		return 1;
	}

	int i;
	for(i=0;i<SIZE1;i++)
	{	a[i]=i;
	}

	printf("Array a:\n");
	print_array(a,SIZE1);

	b=realloc(a,SIZE2);
	if(!b)
	{	printf("Could not expand the memory block.\n");
		return 2;
	}

	printf("Array b:\n");
	print_array(b,SIZE2);

	printf("Both a and b point to same memory location.\n");
	b[4]=12345;

	print_array(a,SIZE1);
	print_array(b,SIZE2);

	return 0;
}

void print_array(const int *a,int n)
{	int i;
	for(i=0;i<n;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");
}
