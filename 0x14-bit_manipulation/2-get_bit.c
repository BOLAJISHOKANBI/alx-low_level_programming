#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	res = n & div;

	if (res == div)
		return (1);
	return (0);
}
