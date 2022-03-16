#include "main.h"

/**
 * largest_number - prints the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
		printf("%d is the largest number\n", a++);
	}
	else if (b > a && b > c)
	{
		printf("%d is the largest number\n", b++);
	}
	else
	{
		printf ("\n");
	}

	return (0);
}
