#include "main.h"

/**
 * print_hexa - prints hexadecimal numbers
 * @args: arguments list
 * @isupper: flag showing whether letters should
 * be uppercase or not
 *
 * Return: number of characters printed
 */

int print_hexa(va_list args, int isupper)
{
	unsigned int n = va_arg(args, unsigned int);
	char hex[] = "0123456789abcdef";
	char m[20];
	int i;
	int j;
	int k;
	char g;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (n > 0)
	{
		k = n % 16;
		m[i++] = hex[k];
		n /= 16;
	}
	m[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		g = m[j];
		if (isupper)
		{
			g = toupper(g);
		}
		write(1, &g, 1);
	}
	return (i);
}
