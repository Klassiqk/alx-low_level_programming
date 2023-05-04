#include "main.h"

/**
 * get_endianness - That checks if machine is little or big endian
 * Return: 0 for big, for little 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
