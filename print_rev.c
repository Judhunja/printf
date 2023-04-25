#include "main.h"

/**
 * print_rev - reverses a string
 * @args: arguments passed to the function
 * Return: Numbers of characters printed
 */

int print_rev(va_list args)
{
	char *string;
	int i;
	int count = 0;

	string = va_arg(args, char *);

	if (string == NULL)
	{

		string = ")Null(";
	}
	for (i = 0; string[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		char k = string[i];

		write(1, &k, 1);
		count++;
	}
	return (count);
}
