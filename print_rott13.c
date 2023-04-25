#include "main.h"

/**
 * print_rott13 - prints to ROT13
 * @args: arguments passed to function
 * Return: count
 *
 */

int print_rott13(va_list args)
{
	int i, j;
	int k = 0;
	char *m = va_arg(args, char*);
	int count = 0;
	char upper[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char lower[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};


	if (m == NULL)
		m = "(null)";

	for (i = 0; m[i]; i++)
	{
		k = 0;
		for (j = 0; upper[j] && !k; j++)
		{
			if (m[i] == upper[j])
			{
				write(1, &lower[j], 1);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			write(1, &m[i], 1);
			count++;
		}
	}
	return (count);
}
