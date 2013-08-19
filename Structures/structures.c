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

/*******************************************
*	Understanding Structures in C.
********************************************/

#include<stdio.h>
#include<string.h>

#define NAME_LEN 50
#define BOOK_LEN 100

/* In this structure definition, we donot have a name for it.
Hence we cannot paas these structure variables to functions.
Hence we cannot make any functions which could operate on this structure.
Also, all the variable declarations of this type will have to be done at the beginning only.
*/
struct
{	int number;
	float decimal_number;
	char name[NAME_LEN+1];
}s1={1,0.5,"Harry Potter"},s2={.decimal_number=2.45,.name="Voldemort",.number=2};

struct book
{	char name[BOOK_LEN+1];
	float price;
};

typedef struct book BOOK;
BOOK init_book(const char *,const float);
void print_book(BOOK);

typedef struct
	{	char name[50];
		int age;
	} AUTHOR;
AUTHOR init_author(const char *,int);
void print_author(const AUTHOR);

int main(void)
{	printf("Structure s1:\n");
	printf("Number:%d\n",s1.number);
	printf("Decimal Number:%0.2f\n",s1.decimal_number);
	printf("Name:%s\n",s1.name);

	printf("Structure s2:\n");
	printf("Number:%d\n",s2.number);
	printf("Decimal Number:%0.2f\n",s2.decimal_number);
	printf("Name:%s\n",s2.name);

	BOOK b=init_book("The World as I see it.",0.0f);
	print_book(b);

	AUTHOR a=init_author("J.K.Rowling",36);
	print_author(a);

	return 0;
}

BOOK init_book(const char *name,const float price)
{	BOOK b;

	strcpy(b.name,name);
	b.price=price;

	return b;
}

void print_book(const BOOK book)
{	printf("Structure Book\n");
	printf("Name:%s\n",book.name);
	printf("Price:%0.2f\n",book.price);
}

AUTHOR init_author(const char *name, int age)
{	AUTHOR a;
	strcpy(a.name,name);
	a.age=age;
	return a;
}

void print_author(const AUTHOR a)
{	printf("Author\n");
	printf("Name:%s\n",a.name);
	printf("Age:%d\n",a.age);
}
