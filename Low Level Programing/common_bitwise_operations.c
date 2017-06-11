#include <stdio.h>

#define BIT_SET(i, j) ((i) | 1 << (j))

#define BIT_RESET(i, j) ((i) & ~( 1 << (j)))

#define BIT_ISSET(i, j) ((i) & (1 << (j)))


#define BLUE 1
#define GREEN 2
#define RED 3

void main()
{
	int i = 0;
	printf("Original numer: %d\n", i);

	/* Set a bit */
	i = BIT_SET(i, 3);
	printf("After 3rd bit set: %d\n", i);

	/* Reset a bit */
	i = BIT_RESET(i, 3);
	printf("After 3rd bit reset: %d\n", i);

	/* Test if bit is set */
	printf("If 3rd bit is set in 8 : %d\n", BIT_ISSET(8, 3));
	printf("If 4th bit is set in 8 : %d\n", BIT_ISSET(8, 4));

	/* Set blue bit */
	i |= BLUE;
	printf("%d\n", i);

	/* Test blue bit */
	printf("%d\n", i & BLUE);

	/* Reset BLUE bit */
	i &= ~BLUE;
	printf("%d\n", i);

	/* Set multiple bits atonce */
	i |= (BLUE | GREEN);
	printf("%d\n", i);

	/* Test if any one bit is set */
	printf("%d\n", (i & (BLUE | GREEN)));

	/*Reset all bits atonce*/
	i &= ~(BLUE | GREEN);
	printf("%d\n", i);
}
