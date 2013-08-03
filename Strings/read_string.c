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
*	Reading a string using scanf and gets.
*	scanf does not read next lines and reads only till the ' ' char, and as usual leaves all the chars to be read by the next scanf call.
**********************************************************************************************************************************************/

#include<stdio.h>

int main(void)
{	/* //This is problematic as the char pointer is not initialised to a memory location.
	char *s;

	scanf("%s",s);

	printf("%s\n",s);
	*/

	char a[10];

	printf("Enter the sentence:");
	// making it safe by explicitly telling to read only 9 chars, 10th place is for NULL.
	scanf("%9s",a);
	/*	// This is not safe, as it leaves no space at the end for the NULL char.
	scanf("%10s",a);
	*/	
	printf("%s\n",a);

	return 0;
}
