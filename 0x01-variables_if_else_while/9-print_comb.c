#include <stdio.h>



/**
 * main - block
 *
 * Return: 0 = success
 */

int main(void)
{
	int item;

	for (item = '0'; item <= '9'; item++)
	{
		putchar(item);

		if (item != '9')
		{
			putchar(',');
			putchar(' ');
		}
	} putchar('\n');
	return (0);
}
