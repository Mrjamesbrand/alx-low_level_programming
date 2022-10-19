#include <stdio.h>
/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int ally = 97;
	int pull = 122;
	int mor = '\n';

	while (ally <= pull)
	{

	putchar(ally);
	ally++;

	}

	putchar(mor);

}
