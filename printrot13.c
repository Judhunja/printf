#include "main.h"
/**
 * printrot13 - prints string in rot13.
 * @args: arguments passed
 * Return: number of characters
 */

int printrot13(va_list args)
{
	char m;
	char *string;
	unsigned int i;
	int count = 0;
	unsigned int k;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	string = va_arg(args, char *);
		if (string == NULL)
		string = "(AHYY)";
	for (i = 0; string[i]; i++)
	{
		for (k = 0; in[k]; k++)
		{
			if (in[k] == string[i])
			{
				m = out[k];
				write(1, &m, 1);
				count++;
				break;
			}
		}
		if (!in[k])
		{
			m = string[i];
			write(1, &m, 1);
			count++;
		}
	}
	return (count);
}
