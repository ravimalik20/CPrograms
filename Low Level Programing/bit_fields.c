/*
	Use of bit-fie;ds inside structures.

	The type of bit field must be int, unsigned int or sugned int.
	Using int is ambigious.

	For portability, declare all bit-fields as signed int or unsigned int.
*/

#include<stdio.h>

struct file_date
{	unsigned int day:5;
	unsigned int month:4;
	unsigned int year:7;
};

int main(void)
{	struct file_date fd;

	fd.day=28;
	fd.month=12;
	fd.year=8;

	/*//Cannot get the address of the bit field.	
	unsigned int *p=&fd.day;
	*/

	printf("%lu",sizeof(fd));

	return 0;
}
