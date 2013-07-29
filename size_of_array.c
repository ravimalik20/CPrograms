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
	Calculating the size of array with sizeof.

	The return type of sizeof operator is size_t which is an unsigned type.
	Since we know that comparing unsigned types with signed types is dangerous, but in this case it is safe because both numbers are positive.
	Some compilers issue a warning at i<sizeof(a)/sizeof(a[0]) because of comparison of signed and unsigned types. So type casting is prefered here.
*/

#include<stdio.h>

#define SIZE (int)(sizeof(a)/sizeof(a[0]))

int main(void)
{	int a[]={[10]=100,[19]=20};
	int i;

	printf("Size of a:%d\n",sizeof(a)/sizeof(a[0]));

	for(i=0;i<SIZE;i++)
	{	printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
