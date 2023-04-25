#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: list of arguments passed to function
 * Return: number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char k[20];

	sprintf(k, "%u", n);

	write(1, k, strlen(k));
	return (strlen(k));
}
