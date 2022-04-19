#include "main.h"

/**
 * print_str - prints string
 * @args: arguments
 * Return: The number of printed character
 */
int print_str(va_list args)
{
	int n = 0;
	char *str = va_arg(args, char *);
	char *str_null = "(null)";

	if (str == NULL)
		str = str_null;

	while (*str)
	{
		if (_putchar(*str++) != -1)
			n++;
	}
	return (n);
}
