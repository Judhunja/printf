#include "main.h"

/**
 * print_int - prints an integer
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	char str[20];

	sprintf(str, "%d", num);
	write(1, str, strlen(str));
	return (strlen(str));
}
