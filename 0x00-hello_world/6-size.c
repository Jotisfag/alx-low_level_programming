#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
int a;
long int b;
long int c;
char d;
float f;
printf("Size of a char: %ilu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %ilu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %ilu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %ilu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %ilu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
