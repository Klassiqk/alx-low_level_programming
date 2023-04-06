#include "main.h"

/**
 * _strlen_recursion - return length of stringg
 * @s: string to be measured
 * Reurn: length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
	longit++;
	longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
