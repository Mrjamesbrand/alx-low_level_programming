#include <stdarg.h>

/**
 * sum_them_all - adds all the parameters
 *
 * @n: sum of input variables
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int p, sum = 0;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* iterate through all parameter values*/
	for (p = 0; p < n; p++)
		/* get the next parameter velue and add it to sum*/
		sum += va_arg(ap, int);
	/*Clean up*/
	va_end(ap);

	return (sum);
}
