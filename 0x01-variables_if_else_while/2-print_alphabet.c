#include <stdio.h>

/**
 * main - print alphabet in lower case
 * Return:0 if no error, non zero if error
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
		putchar('\n');

	return (0);
}
