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

/******************************************************************
*	Functions with void return type can contain return types.
*******************************************************************/

#include<stdio.h>

void hello(int a)
{	while(a-- > 0)
	{	if(a==1)
		{	printf("Hello World\n");
		}
		else if(a==2)
		{	printf("To C or not to C, that is the question!!\n");
		}
		else
		{	printf("Invalid Argument\n");
			return;
		}
	}
}

int main(void)
{	hello(1);
	hello(2);
	hello(3);

	return 0;
}
