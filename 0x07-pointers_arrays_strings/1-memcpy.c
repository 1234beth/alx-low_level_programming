#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies the memory area
 * @dest: memory is stored
 * @src: memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
