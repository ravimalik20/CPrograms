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

/*
How to deal with boolean variables in C. Part-1.
boolean variables are not supported in C89 but were introduced in C99 as _Bool.
So in C89 wecan define macros for representing true and false as:
	#define TRUE 1
	#define FALSE 0

	and more conveniently define a boolean type as:
	#define BOOL int
	this is basically an int variable concealed as BOOL
	then we can operate on it as:
	BOOL a=TRUE;
*/

#include<stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void)
{	BOOL a=FALSE;
	
	if(a==TRUE)
	{	printf("Booleans are working!!\n");
	}
	else
	{	printf("Booleans are still working!!\n");
	}

	return 0;
}

