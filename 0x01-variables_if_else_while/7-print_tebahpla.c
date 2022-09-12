#include <stdio.h>


/**
 * main - block
 *
 * Return: 0 if successful (Always)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
