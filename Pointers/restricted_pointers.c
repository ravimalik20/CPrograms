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

/*****************************************************************************************************************************
*	Understanding the functioning of restricted pointers.
*
*	Restricted pointers are those pointers, that if modified can be accessed through that variable only and none other.
*
*	Works under C99.
******************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{	int * restrict p;
	int * restrict q;

	p=malloc(sizeof(int));
	*p=10;

	q=p;

	*q=0;

	printf("%d",*q);

	return 0;
}
