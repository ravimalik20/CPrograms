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

/*******************************************************
*	Variable Legth Arrays as a function parameter.
********************************************************/

#include<stdio.h>

#define N 20

// * representing that the length is dependent on the value of one of the arguments
void print_array(int,int [*]);

int main(void)
{	int arr[N]={[10]=1};

	print_array(N,arr);

	return 0;
}

void print_array(int n,int arr[n])
{	int i;
	for(i=0;i<n;i++)
	{	printf("%d ",arr[i]);
	}
	printf("\n");
}
