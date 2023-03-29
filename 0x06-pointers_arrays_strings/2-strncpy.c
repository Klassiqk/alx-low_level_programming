#include "main.h"

/**
 * *_strncpy -function that copies string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be used
 * Return: pointer to destination of string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0 ; i < n ; i++)
dest[i] = src[i];
return (dest);
}
