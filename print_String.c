#include "main.h"
/**
* print_String - prints strings with special characters
* @args: arguments to be passed to function
* Return: the length of the string
*/
int print_String(va_list args)
{
	char *k;
	int i, length = 0;
	int cast;
	char hex[3];

	k = va_arg(args, char *);
		if (k == NULL)
		k = "(null)";
	for (i = 0; k[i] != '\0'; i++)
		{
		if (k[i] < 32 || k[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			length += 2;
			cast = k[i];
		if (cast < 16)
		{
			write(1, "0", 1);
			length++;
		}
		sprintf(hex, "%X", cast);
		write(1, hex, 2);
		length += 2;
		}
	else
	{
	write(1, &k[i], 1);
	length++;
	}
	}
	return (length);
}
