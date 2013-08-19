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

/*************************************************************************************
*	Demonstrating the use of pointer to a function.
*
*	C treats fun() as a function calling and fun as address of the function.
*	Even functions have a place in memory.
*
*	function through pointer is accessed via. (*f)(param..)
**************************************************************************************/

#include<stdio.h>

void execute(void (*f)(double));	// First arg is a pointer to a function of return type void and argument double.
void show(double);

int main(void)
{	execute(show);

	return 0;
}

void execute(void (*f)(double))
{	(*f)(13.45);
}

void show(double a)
{	printf("%lf\n",a);
}
