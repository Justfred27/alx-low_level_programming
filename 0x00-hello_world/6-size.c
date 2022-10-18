#include <stdio.h>
/**
 * main - print a c programme that prints various data sizes
 *
 * Return: (0)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(e));
	return (0);
}
