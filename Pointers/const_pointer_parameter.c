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

/********************************************************************************************************
*	Const Pointer Parameters.
*
*	BY making function parameter which is a pointer, const, we make sure that the function will not modify the value of the address placed inside the pointer.
*
*	We can assign a new addres to the pointer but we cannot modify the contents at the address placed inside the pointer.
********************************************************************************************************/

#include<stdio.h>

void pointer(const int *);
void pointer2(int * const);

int main(void)
{	int n=20;
	pointer(&n);
	pointer2(&n);

	printf("n:%d\n",n);
}

void pointer(const int *a)
{	/*	// Illegal. Cannot modify the location.	
	*a=*a+1;
	*/

	int b;
	a=&b;
	
	printf("%d\n",*a);
}

void pointer2(int * const a)
{	int b;

	*a=*a+1;

	/*	// Here pointer is read only, not the location pointed to by the pointer.
	a=&b;
	*/
}
