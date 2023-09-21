#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom implementation of the printf function
 * @format: The format specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, chars_printed;
	char c;

	va_start(args, format);

	while ((c = *format) != '\0')
	{
		if (c == '%')
		{
			c = *(++format); /* Get the character after '%' */
			chars_printed = 0;

			switch (c)
			{
				case 'c':
					chars_printed = print_char(args);
					break;
				case 's':
					chars_printed = print_string(args);
					break;
				case '%':
					chars_printed = print_percent();
					break;
				default:
					_putchar('%');	/* Print '%' and then the unknown specifier */
					_putchar(c);
					chars_printed = 2;
					break;
			}

			count += chars_printed;
		}
		else
		{
			_putchar(c);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
