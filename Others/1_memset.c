/**
* memset() is used to fill a block of memory with a particular value
*
* void *memset(void *ptr, int x, size_t n)
* ptr -> starting address of mem to be filled
* x -> value to be filled
* n -> number of bytes to be filled starting from ptr to be filled
*/

#include<stdio.h>
#include<string.h>

void print_array(int *arr, int len);

void main()
{
	char str[50] = "This is a test program for memset().";
	printf("%s\n", str);

	memset(str + 10, '*', 4 * sizeof(char));
	printf("%s\n", str);

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	print_array(arr, 10);

	memset(arr + 3, 0, sizeof(int)*3);
	print_array(arr, 10);

	/* Won't add 1 at every array location. But will add 1 for every bit in the
		memory range specified
	 */
	int arr2[10] = {0};
	memset(arr2, 1, sizeof(int)*5);
	print_array(arr2, 10);
}

void print_array(int *arr, int len)
{
	while (len-- > 0)
		printf("%d ", *arr++);

	putchar('\n');
}
