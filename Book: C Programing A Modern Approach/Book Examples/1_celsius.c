/* Converts a Farenheight Temperature to Celsius. Demonstration of use of a macro. Never mind the spelling mistakes in some of the identifiers :P */

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)	// Is an expression so must contain parenthesis

int main(void)
{	float farenheight, celsius;

	printf("Enter Farenheit Temperature:");
	scanf("%f",&farenheight);

	celsius=(farenheight-FREEZING_PT)*SCALE_FACTOR;

	printf("Celsius Equivalent %.1f\n",celsius);
	return 0;
}
