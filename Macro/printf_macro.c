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

/**********************************************************************************************************************************************
*	Creating a macro to be used to print integer values and demonstrating the use of # operator within a macro.
*
*	Consider the macro:
*	# define PRINT_INT(n) printf(#n"=%d",n), the #n will convert the given argument to the string and the effective macro result is:
*	
*	PRINT_INT(i/j); will result into printf("i/j""=%d",i/j);
*	Since the compiler concatenates the two strings when placed one after the other, therefore the effective result is:
*	printf("i/j=%d",i/j);		
*
**********************************************************************************************************************************************/

#include<stdio.h>

#define PRINT_INT(n) printf(#n"=%d\n",(n))	// The #n instructs the compiler to create a string literal of the parameter passed to the macro.

int main(void)
{	int i=10,j=2;	
	PRINT_INT(i/j);

	return 0;
}
