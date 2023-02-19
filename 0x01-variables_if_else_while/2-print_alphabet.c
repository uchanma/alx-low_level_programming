#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase.
 *
 * Return: returns 0
 */

int main(void)
{
char current = 'a';
while (current <= 'z')
{
putchar(current);
current++;
}
putchar('\n');
return (0);
}
