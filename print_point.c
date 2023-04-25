#include "main.h"

/**
 * print_point - prints pointers
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_point(va_list args)
{
	void *k = va_arg(args, void *);

	char buffer[20];

	sprintf(buffer, "%p", k);
	write(1, buffer, strlen(buffer));
	return (strlen(buffer));
}
