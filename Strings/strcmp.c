/********************************************************************************************************
*	Understanding the functioning of strcmp.
*	strcmp(str1,str2);
*
*	strcmp compares the two strings depending on their lexicographical ordering.
*	i.e., the order in which the two strings will appear in the dictionary.
*
*	e.g., str1="abc" and str2="abd"; then str1<str2; notice the last d in str2;
*		str1="abc" and str2="abcd"; then also str1>str2; because of the length even if the first 3 chars are same for both.
********************************************************************************************************/

#include<stdio.h>

int main(void)
{	char *a,*b;

	a="abcde";
	b="abcd";

	if(strcmp(a,b)<0)	// Implies a < b
	{	printf("%s is less than %s\n",a,b);
	}
	else if(strcmp(a,b)==0)		// Implies a==b
	{	printf("%s is equal to %s\n",a,b);
	}
	else
	{	printf("%s is greater than %s\n",a,b);
	}
}
