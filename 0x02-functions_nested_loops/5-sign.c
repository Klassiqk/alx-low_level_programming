#include "main.h"

/**
 * print sign - Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 for the positive num, -1 for the negative numor 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
