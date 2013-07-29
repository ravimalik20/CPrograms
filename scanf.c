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

/* 
Understanding the functioning of the scanf function. scanf is actually a pattern matching function.
Check for the multiple commented scanf statements in the code.
*/

#include<stdio.h>

int main()
{	int a,b;
	float c,d;
	/*
	scanf("[%d][%d][%f][%f]",&a,&b,&c,&d);
	// This shall receive input in the form specified in the string pased as the first argument to scanf.
	// exp: This is user input-> : [12][13][13.45][45e5] and it will put the values 12 in a, 13 in b, 13.45 in c and 45e5 in d.	
	*/
	
	scanf("%d%d%f%f",&a,&b,&c,&d);		//Providing this input will also work: 12-34.54-4.0e3	

	/*	
	scanf(".{%d}..{%d}..{%f}..{%f}.",&a,&b,&c,&d);
	*/
	
	printf("[%d][%d][%f][%f]",a,b,c,d);
}
