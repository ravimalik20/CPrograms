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

/*******************************************************************************************
*	How to deal with boolean in C.
*	yet another way to deal with booleans is to use header file stdbool.h.
*	It defines a macro bool equal to _Bool and also define macro for true and false.
********************************************************************************************/

#include<stdio.h>
#include<stdbool.h>

int main(void)
{	bool a=false;

	if(a==true)
	{	printf("stdbool.h is working!!\n");
	}
	else
	{	printf("stdbool.h is still working!!\n");
	}
	
	return 0;
}
