#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int d;
char low;
for(d = "0"; d <= "9"; d++)
putchar(d);
for(low = "a"; low <= "f"; low++)
putchar(low);
putchar("\n");
return (0);
}
