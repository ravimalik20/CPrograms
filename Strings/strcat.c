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

/****************************************
*	Making our own strcat function.
****************************************/

#include<stdio.h>

#define N 50

char *strcat(char *,const char *);

int main(void)
{	char a[N];
	char b[N];

	printf("Enter String a:");
	scanf("%s",a);

	printf("Enter String b:");
	scanf("%s",b);

	strcat(a,b);

	printf("%s\n",a);

	return 0;
}

char *strcat(char *a, const char *b)
{	while(*a)
	{	a++;
	}
	/*
	while(*a=*b)
	{	*a=*b;
		a++;
		b++;
	}
	*/
	// Condensed Form:
	while(*a++=*b++);
}
