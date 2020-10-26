#include "holberton.h"

/**
 * print_hex - converts to hexadecimal
 * @a: the number to convert
 * Return: lenght of number
 **/

int print_hex(va_list a)
{
	unsigned int tmp = va_arg(a, int);
	int binTable[8];
	int i = 0, j, len = 0, rem;

	while (tmp > 0)
	{
		rem = tmp % 16;
		tmp = (tmp - rem) / 16;
		if (rem <= 9)
			binTable[i] = '0' + rem;
		else
			binTable[i] = (rem - 10) + 'a';
		i++;
		len++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(binTable[j]);
		j--;
	}
	return (len);
}
