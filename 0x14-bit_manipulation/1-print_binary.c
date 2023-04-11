#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number
 *
 * @n: number to be prtinted in binary.
 */

void print_binary(unsigned long int n)

{
	int o;

	for (o = (sizeof(unsigned long int) * 8) - 1; o >= 0; o--)

	{
		if (n & (1ul << o))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
