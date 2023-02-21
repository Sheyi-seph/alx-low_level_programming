#include <stdio.h>

/**
 * main - main func
 *
 * Return: always 0
 */

int main(void)
{
	char i;
	char b;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (b = 'A' ; b <= 'z' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
