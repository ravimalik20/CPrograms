/* DONOT COMPILE. DEMO ONLY */

#include<stdio.h>

struct file_date
{
	unsigned int date: 5, month: 4, year: 7;
}

union int_date
{
	unsigned short i;
	struct file_date fd;
};

void main()
{
	unsigned short n;
	union int_date u;

	u.fd = n;

	printf("%d/%d/%d\n", u.fd.month, u.fd.day, u.fd.year);
}
