#include "main.h"
#include <stdio.h>

/**
  * print_array - prints elements of an array
  * @a: array of integers
  * @n: number of arrays to be printed
  * return: void
  */

void print_array(int *a, int n)

{

	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(" , ");
		}
	}
	printf("\n");
}
