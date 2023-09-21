#include <unistd.h>

/**
 * _putchar - Prints a single character to the standard output
 * @c: The character to be printed
 *
 * Return: Nothing
 */
void _putchar(int c)
{
	write(1, &c, 1);
}

