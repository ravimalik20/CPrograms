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

/********************************************************************************************************
*	Understanding the functioning of strcmp.
*	strcmp(str1,str2);
*
*	strcmp compares the two strings depending on their lexicographical ordering.
*	i.e., the order in which the two strings will appear in the dictionary.
*
*	e.g., str1="abc" and str2="abd"; then str1<str2; notice the last d in str2;
*		str1="abc" and str2="abcd"; then also str1>str2; because of the length even if the first 3 chars are same for both.
********************************************************************************************************/

#include<stdio.h>

int main(void)
{	char *a,*b;

	a="abcde";
	b="abcd";

	if(strcmp(a,b)<0)	// Implies a < b
	{	printf("%s is less than %s\n",a,b);
	}
	else if(strcmp(a,b)==0)		// Implies a==b
	{	printf("%s is equal to %s\n",a,b);
	}
	else
	{	printf("%s is greater than %s\n",a,b);
	}
}
