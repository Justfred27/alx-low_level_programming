#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number
 *
 * return: 0
*/
int main(void)
{
	int;

	srand(time(0));
	rand() - RANDMAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
