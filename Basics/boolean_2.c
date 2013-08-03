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
*	How to deal with boolean variables in C. Part-2.
*	In C99 the boolean variables are introduced with an inbuilt type _Bool.
*	It accepts only 0 or 1 as a value and trying to provide a non-zero value will result into storing 1 in it.
********************************************************************************************************/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{	_Bool a=FALSE;

	if(a==TRUE)
	{	printf("_Bool is working!!\n");
	}
	else
	{	printf("_Bool is still working!!\n");
	}

	return 0;
}
