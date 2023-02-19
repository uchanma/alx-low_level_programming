#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of the number stored in the variable n.
 *
 * Return: returns 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand();
printf("Last digit of %d is ", n);
int last_digit = n % 10;
if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
return (0);
}
