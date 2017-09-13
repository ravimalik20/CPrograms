/*
* Enums are used to assign integer values to constants, which are often clubbed
* together for a class of data like, register flags, error codes, etc.
*
* If no values are assigned to enums, they start from 0. The next item is
* assigned the value by incrementing the value of the previous by 1.
* See code.
*/

#include<stdio.h>

enum Week
{
	monday = 1, tuesday=5, wednesday, thursday, friday, saturday, sunday
};

void main()
{
	enum Week day = wednesday;

	printf("Wednesday = %d\n", day);
}
