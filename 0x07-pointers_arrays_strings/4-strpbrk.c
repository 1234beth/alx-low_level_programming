 #include "main.h"
 #include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 *
 * Return: Nothing
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
	s++;
	}
	return ('\0');
}
