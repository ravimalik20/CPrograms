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

/***********************************************************************************************************************
*	Demonstrating the use of pointer with arrays.
*
*	The arithmetic allowed on pointers is addition and subtraction and that too when the pointer is to an array.
*
*	Pointer arrithmetic on normal pointers, i.e., pointers not on array variables leads to undefined behaviour.
*
*	When we increment the pointer pointing to array variable, it then points to the next element of array.
*	e.g.:
*	a=10 and &a==20.
*	a++; address becomes 24, because integer takes 4 bytes in memory. 
************************************************************************************************************************/

#include<stdio.h>

#define N 10

void print_array(int [],int);
void print_array_2(int *,int);
void slice_array(int [],int ,int ,int );

int main()
{	int arr[N]={0,1,2,3,4,5,6,7,8,9},a=10;

	int *p=&arr[0],*q=&a;

	p=p+2;
	q=q+1;

	printf("Value at p:%d\n",*p);
	printf("Value at q:%d\n",*q);	// Undefined Behaviour

	print_array_2(arr,N);

	// Pointer to Compound Literals
	int *r;
	r= (int []){1,2,3,[9]=10};

	print_array(r,10);

	slice_array(arr,N,2,6);

	return 0;
}

// Printing the array using pointer which points to the array elements.
void print_array(int arr[],int n)
{	int *p;
	
	for(p=&arr[0];p<&arr[n];p++)
	{	printf("%d ",*p);
	}
	printf("\n");
}

// Printing the array by passing the address of the array into an int pointer.
void print_array_2(int *arr,int n)
{	int i=0;
	while(i<n)
	{	printf("%d ",*(arr++));
		i++;
	}
	printf("\n");
}

// Print the provided slice of the array
void slice_array(int arr[],int n,int start,int end)
{	print_array(arr+start,end-start);
}


