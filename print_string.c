#include "holberton.h"

int print_string(va_list a)
{
	char *tmp = va_arg(a, char*);
	int j;

	j = 0;
	while (tmp[j])
	{
		_putchar(tmp[j]);
		j++;
	}
	return (j);
}
