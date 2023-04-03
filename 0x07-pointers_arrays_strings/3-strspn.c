#include "main.h"
#include <stdio.h>

/**
 * -strspn.c - entry point
 * @s: input
 * @accept: input
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;
	
	while (*s)
	{
		for (r=0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r+1] == '\o')
				return (n);
		}
		s++;
	}
	return (n)
}
