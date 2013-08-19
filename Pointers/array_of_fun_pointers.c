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

/****************************************************************************************************
*	Array of function pointers.
*
*	The limitation is that the arguments and return type of all the functions need to be same.
*****************************************************************************************************/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

void print_int(int);

void print_float(int);

void print_char(int);

int main(void)
{	void (*fun[])(int)={print_int,print_float,print_char};

	int n,ch;

	printf("Enter an int number:");
	scanf("%d",&n);

	do
	{	printf("Enter Choice:\n");
		printf("1.int\n");
		printf("2.float\n");
		printf("3.char\n");
		printf("4.EXIT\n");
		scanf("%d",&ch);
		
		if(ch==4)
		{	printf("Exit!!\n");
			break;
		}
		else if(ch>0 && ch<4)
		{	(*fun[ch-1])(n);
		}
		else
		{	printf("Wrong Input!!\n");
		}
	}
	while(TRUE);	

	return 0;
}

void print_int(int a)
{	printf("%d\n",a);
}

void print_float(int a)
{	printf("%f\n",(float)a);
}

void print_char(int a)
{	printf("%c\n",(char)a);
}
