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

/**************************************************************************************
*	Understanding Dynamic Memory Allocation of Arrays.
*
*	We can use malloc to initialise the array, but sometimes calloc is prefered.
*	The difference is that calloc after allocating memory, clears it to 0.
*	
*	calloc(number_of_elements,size_of_an_element);
***************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main(void)
{	int *a;

	//a=malloc(sizeof(int)*SIZE);
	a=calloc(SIZE,sizeof(int));

	if(!a)
	{	printf("Memory Allocation Failed");
		exit(1);	
	}

	int i;
	for(i=0;i<SIZE;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

