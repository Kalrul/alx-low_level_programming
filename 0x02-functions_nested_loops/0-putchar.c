#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char main.h[9] = {'M', 'a', 'i', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(main); c++)
	{
		_putchar(main[c]);
	}
	_putchar('\n');
	return (0);
}
