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
*	Issue while using scanf and getchar together.
*
*	Since we know that scanf is a pattern matching function. When it encounters a non spce charachter and if that char is not required, it puts the char back to be read by successive scanf calls.
*	This poses a problem because while using getchar, those unread chars are picked by getchar.
**********************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	int a;
	char c;

	// First enter the input 12e, it will put 12 in a and the leftover e in c.
	// Next enter 12.e (where . is space), it will put 12 in a and ' ' in c.
	scanf("%d",&a);		
	c=getchar();

	printf("a:%d and c:%c",a,c);

	return 0;
}
