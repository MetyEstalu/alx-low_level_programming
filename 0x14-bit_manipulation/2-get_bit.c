#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index:index unsigned int
 * Return: bit at given index else -1 if error accured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

