#include <stdio.h>


/**
 * main - block
 *
 * Return: 0 if successful (always)
 */

int main(void)
{
	char number = '0';

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
