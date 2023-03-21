#include "main.h"

/**
 * print sign - Prints the sign of a number
 * @c: The number to be checked
 * Return: 1 for the positive num, -1 for the negative numor 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
