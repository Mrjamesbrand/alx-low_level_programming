#include "main.h"

/**
 * _strlen - returns the len of a str
 * @s : string
 * Return: length of string
 */

int _strlen(char *s)
	
{
	int p = 0;
	/incremeant up to when the last character is NULL,\0/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
