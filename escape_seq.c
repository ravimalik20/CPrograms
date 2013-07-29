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

/******************************************************************************************************************************************
*	Do define an escape sequence, the number which follows the \ should be an octal or hexadecimal and should lie within the range of unsigned char.
*	Escape sequence can be used to print charachters, and more often to print charachters that are not present on the keyboard.
* When providing input as hexadecimal, provide as \xaf and when providing as octal, simply write the number after \ like \12.
*******************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	printf("Printing '0' with the help of Escape sequence:\60\n");
	printf("Printing '1' with the help of Escape sequence:\61\n");

	printf("\n");

	printf("Now printing charachters that are not presenton the keyboard:\n");
	printf("\xaf\n");

	return 0;
}
