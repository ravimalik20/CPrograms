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

/*******************************************************************************************************************************************
*	Understanding memory deallocation using free function.
*
*	Malloc and other memory allocation functions obtain storage blocks from a heap.
*	When the memory once allocated is not assigned to any pointer variable, it is said to be garbage.
*	A program that leaves garbage behind has a memory leak.
*	If we don't manage the garbage, it will eventually fill the heap, with no memory available to use and we will run out of memory.
	
	Memory deallocation may lead to dangling pointer problem.
********************************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{	int *a,*b;

	a=malloc(sizeof(int));
	b=malloc(sizeof(int));

	*a=10;
	*b=20;

	printf("a:%d,b:%d\n",*a,*b);

	/*
	a=b;	// Memory previously pointed by a is now garbage and needs to be freed.
	*/

	free(a);	
	a=b;

	printf("a:%d,b:%d\n",*a,*b);

	free(b);

	printf("a:%d\n",*a);	// Undefined Behaviour.

	return 0;
}
