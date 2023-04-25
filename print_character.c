#include "main.h"

/**
 * print_character - prints  character
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_character(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
