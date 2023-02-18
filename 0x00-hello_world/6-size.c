#include <stdio.h>
/**
 * main - entry point
 * Description: A program that prints the size of a varios types of computers
 * Return: returns 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %ld  byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
