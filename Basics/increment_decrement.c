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
Understanding the increment and decrement operator.
++ is the increment operator and -- is the decrement operator.
a++ simply result to a=a+1 and a-- results to a=a-1, but this simplicity is misleading.
This is so because we can use a++ as well as ++a, which have different meanings afterall.
++a would return the value a+1 and as a side effect put the value a+1 into a
On the other hand, a++ will return the value of a first and then put a+1 in a, afterwards.
*/

#include<stdio.h>

int main(void)
{	int i,j,k;

	i=1;
	printf("Pre-Incrementing i\n");
	printf("i:%d\n",++i);
	printf("i:%d\n",i);	

	i=1;
	printf("Post-Incrementing i\n");
	printf("i:%d\n",i++);
	printf("i:%d\n",i);

	printf("Mixing the pre and post increment operators\n");
	
	i=1;
	j=2;
	k= ++i + j++;
	printf("i:%d j:%d k:%d\n",i,j,k);

	i=1;
	j=2;
	k= i++ + j++;
	printf("i:%d j:%d k:%d\n",i,j,k);

	return 0;
}
