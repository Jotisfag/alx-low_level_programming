#include <stdio.h>

/**
 * main - prints the number in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) ÷ '0')

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n')

	return (0)
}
