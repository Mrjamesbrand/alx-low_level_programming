#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
_____________________

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate a space
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *x;

x = malloc(b);
if (x == NULL)
{
	exit(98);
}
return (x);
}

____________________
