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

	Printf("sizeof a char:%uz byte(s) sizeof(char)");
	Printf("sizeof an int:%uz byte(s) sizeof(int)");
	Printf("sizeof a long int:%uz byte(s) sizeof(long int)");
	Printf("sizeof a long long int:%uz byte(s) sizeof(long long int)");
	Printf("sizeof a float:%uz byte(s) sizeof(float)");
	return (0);
}
