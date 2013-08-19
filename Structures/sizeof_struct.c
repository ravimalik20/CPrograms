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
*	Using sizeof operator with struct.
*
*	When we use sizeof to find size of a structure variable, it may not yield the expected result.
*	This is so because, a compiler may implement structure in memory by replacing empty bytes between the consecutive elements, known as holes.
*	The number of holes is compiler dependent.
*
*	But a hole shall not occur at the starting of the structure, as defined in the C standard.
**********************************************************************************************************************************************/

#include<stdio.h>

struct st
{	int a;
	char c;
};

int main(void)
{	struct st s;	
	printf("%d\n",sizeof(s));

	return 0;
}
