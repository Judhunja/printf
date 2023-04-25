#include "main.h"

/**
 * print_octal - prints octal numbers
 * @args: list of arguments passed to function
 *
 * Return: number of chars printed
 */

int print_octal(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);
	char k[23];

	sprintf(k, "%li", n);
	write(1, k, strlen(k));
	return (strlen(k));
}
