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

/****************************************************************************************************************
*	Trap while Comparing signed and unsigned number.
*	
*	When the numbers are type converted by the compiler, they are converted to the nearest fitting type.
*	short -> unsigned short -> int -> unsigned int -> long -> unsigned long
*	Hence when we compare an unsigned number with a signed number, a situation can occur which can trap us.
*
*	 There is just one thing to remember that, try to avoid using unsigned numbers as often as possible.
*****************************************************************************************************************/

#include<stdio.h>

int main(void)
{	unsigned int i=10;
	int j=-10;

	// Here when type conversion occurs, the signed number is converted to unsigned number.
	// Since when the signed number is converted, the sign bit is considered to be a part of the number.
	// Hence the value turns out to be much greater. 
	printf("%d\n",j<i);	

	return 0;
}
