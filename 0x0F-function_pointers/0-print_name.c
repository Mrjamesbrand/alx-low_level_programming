/**
 * print_name - function to print name
 *
 * @name: name of the person
 *@f: function poinyer that doesn't return anything
 *
 * Return: 0;
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
