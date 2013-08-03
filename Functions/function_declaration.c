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

/******************************************************************************************************
*	Understanding the function declaration.
*
*	We know that, when there is no return type provided to a function, it is by default understood to be int.
*	Similarly, when there is no function declaration and the function is used without definition encountered, the compiler tries to give an implicit declaration to the function.
*******************************************************************************************************/

#include<stdio.h>

int main(void)
{		
	/*	At first these statements seem totally invlid.
		But these are allowed ones.
		Here the compiler tries to provide an implicit declaration by itself of the function and later matches it.
		When at later stage it seems conflicting, then we see an error message.
		Hence all the four function calls are allowed but they give warning message.
		In GCC to see the warning run GCC with -Wall parameter.
	*/

	hello_world();
	hello_world(20);
	hello_world(20,30.54);
	hello_world(20,30.45,'c');
	
	/*
	// Conflicting implicit declaration warning in this
	hello();
	*/

	return 0;
}

void hello()
{	printf("Hello\n");
}

int hello_world()
{	printf("Hello World\n");
	//printf("%d\n",a);
	return 0;
}
