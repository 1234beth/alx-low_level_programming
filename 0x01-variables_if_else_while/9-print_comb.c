#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - <some text here>
* <more text here if necessary>
* Return: <some text here>
*/

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n);
if(n != 9)
{
putchar( ',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
