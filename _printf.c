#include "main.h"

/**
 * _printf - printf clone
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;

	if (format == NULL)
		return (-1);


	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format++;
			count += print_arg(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
