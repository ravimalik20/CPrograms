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

/***********************************************************************************************************
*	Dealing with printf()
*
*	When providing arguments to printf, you have to explicitly type convert these for propper results. 
************************************************************************************************************/

#include<stdio.h>

int main(void)
{	/*	// Problem Cases.
		// In some compilers it results into warnings and in some it results to compile time errors. 
	printf("%d\n",13.45f);
	printf("%f\n",13);
	printf("%f\n",13.45);
	*/

	printf("%d\n",(int)13.45f);
	printf("%f\n",(float)13);
	printf("%f\n",(float)13.45);

	return 0;
}
