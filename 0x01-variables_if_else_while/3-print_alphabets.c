#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase and uppercase.
 *
 * Return: returns 0
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
