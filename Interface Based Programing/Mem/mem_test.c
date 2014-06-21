#include"mem.h"
#include<stdio.h>

int main(void)
{	int *a = Mem_alloc(sizeof(int), __FILE__, __LINE__);
	*a = 10;
	printf("%d\n", *a);
	Mem_free(a, __FILE__, __LINE__);

	int *b;
	NEW(b);
	*b = 100;
	printf("%d\n", *b);
	Mem_free(b, __FILE__, __LINE__);

	NEW0(b);
	printf("%d\n", *b);
	Mem_free(b, __FILE__, __LINE__);

	return 0;
}
