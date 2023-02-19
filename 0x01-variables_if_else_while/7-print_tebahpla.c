#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse.
 *
 * Return: returns 0
 */

int main(void)
{
int i;
for (i = 25; i >= 0; i--)
{
putchar(i + 'a');
}
putchar('\n');
return (0);
}
