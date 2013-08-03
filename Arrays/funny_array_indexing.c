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
*	How array indexes are realy treated.
*	When we write a[i], the compiler treats it as *(a+i)
*	What if we write the same as i[a]???
*	It shall produce the same result as a[i], beacause it will be read by the compiler as *(i+a), which is the same as *(a+i)
*	P.S. This concept made my day.. :D 
********************************************************************************************************/

#include<stdio.h>

#define N 10

int main(void)
{	int arr[N]={1,2,3,4,5,6,7,8,9,0};
	int i=4;

	printf("arr[i]:%d\n",arr[i]);
	printf("i[arr]:%d\n",i[arr]);
	printf("And this is funny!!!\n");

	return 0;
}
