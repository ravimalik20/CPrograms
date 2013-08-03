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
*	Understanding the scope of the variable.
*
*	A variable can have two types of scope:
*		1. File Scope (visible throughout the file since being declared.)
*		2. Block Scope (visible within the block declared, since being declared.)
*
*	Apart from the visibility of the variable, it can have automatic or static storage location.
*
*	The most important scope rule is:
*		If a variable is declared within a block which is already declared outside the block, then the new variable hides the outside declared block for within the block and replaces the outside variable for the block.
*		When the block ends, the old variable regains its value again.
**********************************************************************************************************************************************/

#include<stdio.h>

int v=10;

void func()
{	int v=12345;
	int i;

	printf("Value of the block variable v:%d\n",v);

	for(i=0;i<5;i++)
	{	static int v=5;
		printf("Value of the block variable v:%d\n",v++);
	}

	printf("Value of the block variable v:%d\n",v);
}

int main()
{	printf("Value of the external variable v:%d\n",v);

	if(v==10)
	{	int v=20;
		printf("Value of the block variable v:%d\n",v);
	}
	printf("Value of the external variable v:%d\n",v);

	func();

	return 0;
}
