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
