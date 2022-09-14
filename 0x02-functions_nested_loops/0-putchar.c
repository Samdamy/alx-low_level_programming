#include "main.h"
/**
 * main - entry block
 * Description: Print _purchar followed by a new line
 * The program should 0
 * return: 0
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
