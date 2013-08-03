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
*	Understanding Strings...
*
*	String Basics....
*
*	Strings in C are implemented just like arrays.
*	But the difference is that, they contain NULL charachter at the end.
*	Hence they follow all the rules of arrays.
*	When the string is passed on to a function, only the base address is passed.
*	Hence char * can be used to hold the string base address, which eventually can be used to access whole of the string, as is the case with arrays.
**********************************************************************************************************************************************/

#include<stdio.h>

void print_string_hex(char *, int);
void print_string(char *);

int main(void)
{	// It contains the address in memory where the string is placed.	
	char *a;
	a="Hello World.";

	// It contains the values.
	char b[15]="Hello World";

	// Notice the output. All unfilled locations are initiallised to 0. Which is consistent with the array initialisations.	
	print_string_hex(b,15);

	/*	// Undefined Behaviour. Not allowed.
	a[2]='c';
	*/
	b[2]='c';
	print_string(b);

	char *c;
	c=b;

	/*This is allowed because, just like arrays the a[i] is converted to *(a+i) and accessed via the address.*/
	c[2]='d';
	print_string(c);

	/* // Illegal. Cannot assign pointer to a string literal to array.
	b="My name is";
	*/
}

void print_string(char s[])
{	while(*s!='\0')
	{	printf("%c",*(s++));
	}
	printf("\n");
}

void print_string_hex(char *b,int n)
{	while(n--!=0)
	{	printf("%x ",*(b++));
	}
	printf("\n");
}
