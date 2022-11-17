#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 * @separator: pointer to constant seperator
 * @n: start of input variables
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	/* initialize the argument list from start */
	va_start(ap, n);

	/* iterate through each argument*/
	for (i = 0; i < n; i++)
	{
		/* print next argument*/
		printf("%d", va_arg(ap, int));
		/* print separator only between arguments */
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
