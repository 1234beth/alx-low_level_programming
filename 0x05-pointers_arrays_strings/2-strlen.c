#include <stdio.h>

/**
  *_strlen - returns the length of a string
  *@str: the string to get length of
  *return: the length of @str.
  */

size_t_strlen(const char *str)

{

	size_t length = 0;

	while ( *str++)
		length++;
	return (length);

}
