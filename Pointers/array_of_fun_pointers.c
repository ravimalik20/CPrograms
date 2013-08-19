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
