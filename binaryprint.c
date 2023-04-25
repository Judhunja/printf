#include "main.h"
/**
* binaryprint - prints binary number
* @args: arguments passed to function
* Return: no
*/

int binaryprint(va_list args)
{
	unsigned int j, k, i, sum;
	unsigned int b[32];
	int no;

	j = va_arg(args, unsigned int);
	k = 2147483648;
	b[0] = j / k;
	for (i = 1; i < 32; i++)
	{
		k /= 2;
		b[i] = (j / k) % 2;
	}
	for (i = 0, sum = 0, no = 0; i < 32; i++)
	{
		sum += b[i];
		if (sum || i == 31)
		{
			char z = '0' + b[i];

			write(1, &z, 1);
			no++;
		}
	}
	return (no);
}
