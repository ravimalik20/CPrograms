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

/************************************************************************************************************************************
*	Switch Statement
*	switch(constant_integer)	// Char shall do coz it is actually represented in memory with ASCII codes which are int.
*	{	case constant_expression:
*			statements;
*		case constant_expression:
*			statements;
*		.
*		.
*		.
*		default:		// Optional
*			statements; 
*	}
*************************************************************************************************************************************/

#include<stdio.h>

#define ZERO 0

int main(void)
{	int a;
	const int b=4;

	printf("Provide the argument to the switch statement:");
	scanf("%d",&a);

	switch(a)
	{	case ZERO:
			printf("Case 0\n");
			break;
		case 1:
			printf("Case 1\n");
			break; 
		case ZERO+2:
			printf("Case 2\n");
			break;
		case 1+2:
			printf("Case 3\n");
			break;
		/* This case not working
		case b:
			printf("Case 4\n");
			break;
		*/
		default:
			printf("Case DEFAULT\n");
			break;
	}
	
	return 0;
}
