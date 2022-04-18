#include "main.h"

/**
 * _printf - print
 * @format:  is the character string format
 * Return: the characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	char ch;
	int i = 0;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					ch = (char)va_arg(list, int);
					_putchar(ch);
					break;
				case 's':
					{char *s = va_arg(list, char *);
					while (*s)
					{
						_putchar(*s++);
					}
					}
						break;
				case '%':
					_putchar(format[i]);
					break;
				default:
					break;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}
