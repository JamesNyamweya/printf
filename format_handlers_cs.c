#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Handles the format specifier %c
 * @args: the list of arguments passed to printf
 *
 * Description: Prints a character passed to the custom printf
 * Return: 1 (1 character printed)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}

/**
 * print_string - Handles the format specifier %s
 * @args: the list of arguments passed
 *
 * Description: Prints a string passed to the custom printf
 * Return: Number of character printed
 */

int print_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_percent - handles the format specifier %%
 *
 * Description: This format specifier allows you to print the % sign
 * Return: 1 (only one character is printed
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}
