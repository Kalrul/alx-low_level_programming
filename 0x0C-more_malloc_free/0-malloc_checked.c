#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b)
	b = malloc_checked(sizeof(char) * 98);
	printf("%p\n", (void *)c);
	free(p);
	return (98);
}
