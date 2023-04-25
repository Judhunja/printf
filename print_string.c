#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguments passed to function
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	write(1, s, strlen(s));
	return (strlen(s));
}
