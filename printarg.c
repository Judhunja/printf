#include "main.h"

/**
 * print_arg - prints arguments according to data type
 * @format_spec: format specifier
 * @args: arguments list
 *
 * Return: number of characters printed
 */

int print_arg(char format_spec, va_list args)
{

	switch (format_spec)
	{
		case 'c':
			return (print_character(args));
		case 's':
			return (print_string(args));
		case 'S':
			return (print_String(args));
		case 'd':
		case 'i':
			return (print_int(args));
		case '%':
			write(1, "%", 1);
			return (-1);
		case 'b':
			return (binaryprint(args));
		case 'p':
			return (print_point(args));
		case 'u':
			return (print_unsigned(args));
		case 'o':
			return (print_octal(args));
		case 'x':
			return (print_hexa(args, 0));
		case 'X':
			return (print_hexa(args, 1));
		case 'r':
			return (print_rev(args));
		case 'R':
			return (printrot13(args));
		default:
			return (0);
	}
}
