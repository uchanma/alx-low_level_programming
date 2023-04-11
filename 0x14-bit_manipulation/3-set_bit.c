#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of bit at a given index.
 * @n: Pointer to bit.
 * @index: Index starts at 0.
 *
 * Return: returns -1 if error occures.
 * Otherwise - return 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
