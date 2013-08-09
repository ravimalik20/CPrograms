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
*	Demonstrating the true nature of assignment operator '='
*	= operator is a binary operator, which must contain an lvalue as its left operand and can contain an *expression or a literal on the right.
*	The role of the = operator is to evaluate the expression on the right and assign it to the lvalue on the left.
*	But unlike many languages, = is not a statement but a operator and does one more job than just assigning to the lvalue.
*	After assigning, it returns the value assigned to the lvalue.
*	For exp:
*	a=20+(b=30);
*	here b is equal to 30 and a is equal to 50
********************************************************************************************************/

#include<stdio.h>

int main(void)
{	int a,b;
	
	b=20+(a=10);

	printf("a:%d and b:%d\n",a,b);

	int i;
	float j;

	j=i=102.33;		// Here i=102 and j=102.0 (not 102.33)

	printf("i:%d and j:%f\n",i,j);

	/*
	//Also the under mentioned statements are illegal and will result into lvalue error
	a+b=30;
	// This is because lhs of = should be an lvalue, not an expression or a literal.
	*/
	/*
	b=20+a=10;
	// This is also invalid because, when a=10 is evaluated, it considers it as 20+a=10 ,
	// hence resulting into an lvalue error.
	*/
}
