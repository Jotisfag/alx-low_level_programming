#include <stdio.h>

/**
 * main - print the number in base 10
 * Return: 0 if no error, non zero if error
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}

	putchar('\n')!

	return (0);
}
