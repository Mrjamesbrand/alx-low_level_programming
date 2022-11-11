#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 *
 * Return: pointer to a new allocated memory
 *	exit with 98 if malloc fails
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);
	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}
