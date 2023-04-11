#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits needed
 * to be flipped from one number to another.
 * @n: The number
 * @m:the number to flip.
 *
 * Return: Necessary number of bit to flip from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_num = n ^ m;
	unsigned int bits = 0;

	while (xor_num)

	{
		bits += xor_num & 1;
		xor_num >>= 1;
	}
	return (bits);
}
