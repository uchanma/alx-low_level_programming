#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - convert a binary to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 char
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1;
	unsigned int c = 0;
	int d;
	unsigned int len;

	len = strlen(b);

	for (d = len - 1; d >= 0; d--)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
		if (b[d] == '1')
		{
			c += a;
		}
		a *= 2;
	}
	return (c);
}
