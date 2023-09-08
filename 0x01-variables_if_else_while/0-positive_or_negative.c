#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - This is where the program start from
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zer\no", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
